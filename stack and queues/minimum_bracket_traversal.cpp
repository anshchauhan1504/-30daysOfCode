// For a given expression in the form of a string, find the minimum number of brackets that can be reversed in order to make the expression balanced. The expression will only contain curly brackets.
// If the expression can't be balanced, return -1.
// Example:
// Expression: {{{{
// If we reverse the second and the fourth opening brackets, the whole expression will get balanced. Since we have to reverse two brackets to make the expression balanced, the expected output will be 2.

// Expression: {{{
// In this example, even if we reverse the last opening bracket, we would be left with the first opening bracket and hence will not be able to make the expression balanced and the output will be -1.
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int countBracketReversals(string input) {
    stack<char>s1;
    char c1;
    char c2;
    int count=0;
    int len=input.size();
    if(len%2==0)
    {
       for(int i=0;i<len;i++)
       {
           if(input[i]=='{')
         {
            s1.push(input[i]);
         }
        else if(input[i]=='}' && !s1.empty() && s1.top()=='{')
         {
            s1.pop();
         }
        else if(input[i]=='}' && !s1.empty() && s1.top()!='{')
         {
            s1.push(input[i]);
         }
        else
         {
            s1.push(input[i]);
         }
       }
       while(!s1.empty())
       {
           c1=s1.top();
           s1.pop();
           c2=s1.top();
           s1.pop();
           if(c1==c2)
           {
              count+=1;
           }
           else
           {
              count+=2;
           }
       }
        return count;          
    }
    else
    {
        return -1;
    }
	
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    string input;
    cin >> input;
    cout << countBracketReversals(input);
return 0;
}