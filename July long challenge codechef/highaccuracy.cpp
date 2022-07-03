// There are 100 questions in a paper. Each question carries +3 marks for correct answer, -1 marks for incorrect answer and 0 marks for unattempted question.

// It is given that Chef received exactly X (0≤X≤100) marks. Determine the minimum number of problems Chef marked incorrect.
// Sample 1:
// Input
// 4
// 0
// 100
// 32
// 18
// Output
// 0
// 2
// 1
// 0
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