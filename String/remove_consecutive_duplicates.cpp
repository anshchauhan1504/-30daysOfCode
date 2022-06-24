// For a given string(str), remove all the consecutive duplicate characters.
// Example:
// Input String: "aaaa"
// Expected Output: "a"

// Input String: "aabbbcc"
// Expected Output: "abc"
// Sample Input 1:
// aabccbaa
// Sample Output 1:
// abcba
#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    int i=1;
    int j=1;
    int n=0;
    char l_c=input[0];
    while(input[i]!='\0')
    {
        if(l_c==input[i])
        {
            i++;
        }
        else
        {
            input[j]=input[i];
            l_c=input[j];
            j++;
            i++;
        }
       
    }
     input[j]='\0';
    
    
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
return 0;
}