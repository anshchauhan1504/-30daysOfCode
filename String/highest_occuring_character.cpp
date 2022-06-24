// For a given a string(str), find and return the highest occurring character.
// Example:
// Input String: "abcdeapapqarr"
// Expected Output: 'a'
// Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
// Sample Input 1:
// abdefgbabfba
// Sample Output 1:
// b
#include<bits/stdc++.h>
using namespace std;
char highestOccurringChar(char input[]) {
    int n=256;
    int input3[n];
    for(int i=0;i<n;i++)
    {
        input3[i]=0;
    }
    for(int i=0;input[i]!='\0';i++)
    {
        int j=input[i];
        input3[j]=input3[j]+1;
        
    }
    char ans=input[0];
       int k=input[0];
       int c=input3[k];
    int i=1;
    while(input[i]!='\0')
    {
        
        int l=input[i];
        int f_c=input3[l];
        if(f_c>c)
        {
            c=f_c;
            ans=input[i];
            i++;
        }
        else if(f_c<=c)
        {
            i++;
        }
        
    }
    return ans;
    
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
return 0;
}