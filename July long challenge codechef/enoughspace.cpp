#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int test;
cin>>test;
int N;
int x,y;
for(int i=0;i<test;i++)
{
    cin>>N;
    cin>>x;
    cin>>y;
    if(x+(2*y)<=N)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}