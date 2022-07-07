// Given an integer array A of size n. Find and print all the leaders present in the input array. An array element A[i] is called Leader, if all the elements following it (i.e. present at its right) are less than or equal to A[i].
// Print all the leader elements separated by space and in the same order they are present in the input array.
// Input Format :
// Line 1 : Integer n, size of array
// Line 2 : Array A elements (separated by space)
// Output Format :
//  leaders of array (separated by space)
// Sample Input 1 :
// 6
// 3 12 34 2 0 -1
// Sample Output 1 :
// 34 2 0 -1;
#include<iostream>
#include<climits>
using namespace std;
void Leaders(int* arr,int len)
{
    int j=0;
    int *save= new int[len];
    int largest=INT_MIN;
    for(int i=len-1;i>=0;i--)
    {
        if(arr[i]>=largest)
        {
            save[j]=arr[i];
            j++;
            largest=arr[i];
        }
    }
    for(int i=j-1;i>=0;i--)
    {
        cout<<save[i]<<" ";
    }
    
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
