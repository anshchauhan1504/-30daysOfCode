// Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
// Return true or false.
// Do it recursively.
// E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
// Input Format :
// Line 1 : String s
// Line 2 : String t
// Output Format :
// true or false
// Sample Input 1 :
// abchjsgsuohhdhyrikkknddg
// coding
// Sample Output 1 :
// true
#include <bits/stdc++.h>
using namespace std;
bool checksequenece(char large[] , char*small) {
    
    if(small[0]=='\0')
        return true;
    
    if(large[0]=='\0'&& small[0]!='\0')
        return false;
   

    if(large[0]!=small[0])
    {
        bool ans= checksequenece(large+1,small);
        return ans;
    }
        
    if(large[0]==small[0])
    {
        bool smallans=checksequenece(large+1,small+1);
     return smallans;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char large[10000];
    char small[10000];
    cin >> large;
    cin >> small;
    bool x = checksequenece(large, small);

    if (x)
        cout << "true";
    else
        cout << "false";
    return 0;
}