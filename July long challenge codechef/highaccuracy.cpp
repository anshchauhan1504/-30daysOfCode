#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int test;
cin>>test;
int x;
for(int i=0;i<test;i++)
{
    cin>>x;
    int a=0;
    if(x%3==0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<max((x+1)%3,(x+2)%3);
    }
 
}
return 0;
}