// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".
// Example 1:
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:
// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        int len1=address.size();
        string s;
        for(int i=0;i<len1;i++)
        {
            if(address[i]=='.')
            {
                s+="[.]";
            }
            else
            {
                s+=address[i];
            }
        }
        return s;
        
    }
};
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
string address;
cin>>address;
Solution s1;
string sol=s1.defangIPaddr(address);
cout<<sol;
return 0;
}