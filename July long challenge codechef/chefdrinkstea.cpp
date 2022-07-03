#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int test;
cin>>test;
int x,y,z;

for(int i=0;i<test;i++)
{
    cin>>x;
    cin>>y;
    cin>>z;
    int sum=0;
    int ny=0;
    if(y>x || y==x)
    {
        cout<<z<<endl;
    }
    else
    {
        ny=y;
        sum=z;
        while(ny<x)
        {
            ny+=y;
            sum+=z;
        }
        cout<<sum<<endl;
    }
    

}
return 0;
}