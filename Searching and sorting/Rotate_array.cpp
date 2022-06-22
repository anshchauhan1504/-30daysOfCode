// You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
// Sample Input 1:
// 1
// 7
// 1 2 3 4 5 6 7
// 2
// Sample Output 1:
// 3 4 5 6 7 1 2
#include<bits/stdc++.h>
using namespace std;
void rotate(int *input, int d, int n)
{
    if(d==0) return;
    int j=0,k=0;
    int arr1[1000000];
    while(j<d){   
            arr1[k]=input[j];
            k++;
            j++;   
    }
    
     for(int i=d; i<n; i++){
        input[i-d]=input[i];
    }
    
    int startRotate = n-d,idx=0;
    for(int i=startRotate;i<n;i++){
        input[i] = arr1[idx];
        idx++;
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}
return 0;
}