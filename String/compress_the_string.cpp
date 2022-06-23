// Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
// Example:
// If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

// The string is compressed only when the repeated character count is more than 1.
// Sample Input 1:
// aaabbccdsa
// Sample Output 1:
// a3b2c2dsa
// Explanation for Sample Output 1:
// In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 2 times and 'd', 's' and 'a' and occuring 1 time hence no compression for last 3 characters.
#include<bits/stdc++.h>
using namespace std;
string getCompressedString(string &input) {
   
    string newStr= "";
    char preChar=input[0];
    int i=1;
    int count=1;
    while(input[i]!='\0')
    {
        
        if(input[i]==preChar)  // j=i+1;
        {
            count+=1;
            
        }
        else
        {
            if(count>1){
                newStr+=preChar+to_string(count);
            	preChar=input[i];
            	count=1;
            }else if(count==1){
                newStr+=preChar;
                preChar=input[i];
                count=1;
            } 
        }
        i++;
    }
    if(count>1){
       newStr+=preChar+ to_string(count); 
    }else if(count==1){
        newStr+=preChar;
    }
    return newStr;
    
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
return 0;
}