// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
// Permutations of each other
// Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

// Example: 
// str1= "sinrtg" 
// str2 = "string"

// The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
// Sample Input 1:
// abcde
// baedc
// Sample Output 1:
// true
#include<bits/stdc++.h>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
  int n=256;
    char input3[n];
    int i=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        input3[i]=0;
    }
    while(input1[i]!='\0')
    {
        int j=input1[i];
        input3[j]=input3[j]+1;
        i++;
    }
    while(input2[k]!='\0')
    {
        int j=input2[k];
        input3[j]=input3[j]-1;
        k++;
    }
    for(int j=0;j<n;j++)
    {
        if(input3[j]!=0)
        {
            return false;
        }
       
    }
    return true;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
return 0;
}