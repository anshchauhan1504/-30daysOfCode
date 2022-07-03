// Chef has planned that he will drink exactly XX liters of tea daily. He has an empty jar having a capacity of Y liters.

// Chef can visit the tea shop to refill the jar. In each refill, the jar is completely filled to the brim and Chef is charged Z rupees.

// Chef wonders what is the minimum amount of money he has to pay for drinking exactly X liters of tea daily.
// Sample 1:
// Input
// 4
// 3 3 3
// 6 3 3
// 5 7 2
// 9 4 5
// Output
// 3
// 6
// 2
// 15
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