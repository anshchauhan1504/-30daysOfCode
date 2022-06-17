// For a given expression in the form of a string, find if there exist any redundant brackets or not. It is given that the expression contains only rounded brackets or parenthesis and the input expression will always be balanced.
// A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary or needless brackets.
// Example:
// Expression: (a+b)+c
// Since there are no needless brackets, hence, the output must be 'false'.

// Expression: ((a+b))
// The expression can be reduced to (a+b). Hence the expression has redundant brackets and the output will be 'true'.
#include <bits/stdc++.h>
#include <stack>
using namespace std;
bool checkRedundantBrackets(string expression) {
    stack<char>s1;
    int len=expression.size();
    int count=0;
    int count1=0;
    for(int i=0;expression[i]!=')';i++)
    {
        s1.push(expression[i]);
    }
    while(s1.top()!='(')
    {
        s1.pop();
        count+=1;
    }
    s1.pop();
    if(s1.size()!=0)
    {
        while(s1.top()!='(')
        {
            s1.pop();
            count1+=1;
        }
        s1.pop();
        if(count1>1)
        {
            return false;
        }
        else{
            return true;
        } 
    }
    else
    {
        if(count>1)
        {
            return false;
        }
        else{
            return true;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
    return 0;
}