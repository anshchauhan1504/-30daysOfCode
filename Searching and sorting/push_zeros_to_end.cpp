// You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
// Sample Input 1:
// 1
// 7
// 2 0 0 1 3 0 0
// Sample Output 1:
// 2 1 3 0 0 0 0
//  Explanation for the Sample Input 1 :
// All the zeros have been pushed towards the end of the array/list. Another important fact is that the order of the non-zero elements have been maintained as they appear in the input array/list.
#include<bits/stdc++.h>
using namespace std;
void pushZeroesEnd(int *input, int size)
{
     int k=0; 
    for(int i=0; i<size; i++)
    {
       
            if(input[i]!=0)
            {
                int temp=input[k];
                input[k]=input[i];
                input[i]=temp;
                k++;
            }
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}
return 0;
}