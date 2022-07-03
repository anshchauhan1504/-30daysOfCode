// Chef's computer has N GB of free space. He wants to save X files, each of size 1 GB and Y files, each of size 2 GB on his computer. Will he be able to do so?

// Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.
// Sample 1:
// Input
// 4
// 6 3 1
// 2 2 2
// 4 3 2
// 5 1 2
// Output
// YES
// NO
// NO
// YES
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