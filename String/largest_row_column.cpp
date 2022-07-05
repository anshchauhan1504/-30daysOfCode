// For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
// Note :
// If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.
// Output Format :
// For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
// OR
// If column sum is maximum, then print: "column" <col_index> <col_sum>
// It will be printed in a single line separated by a single space between each piece of information.

// Output for every test case will be printed in a seperate line.
// Sample Input 1 :
// 1
// 2 2 
// 1 1 
// 1 1
// Sample Output 1 :
// row 0 2
#include <iostream>
#include<climits>
using namespace std;
void findLargest(int **arr, int n, int m)
{
    int sum2=INT_MIN;
    
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {int sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
     
     if(sum>sum2)
     {
         a=i;
         sum2=sum;
     }
     
    }
    int sum3=INT_MIN;
     for(int i=0;i<m;i++)
    {int sum=0;
        for(int j=0;j<n;j++)
        {
           sum=sum+arr[j][i]; 
        }
     if(sum>sum3)
     {
         b=i;
         sum3=sum;
         
     }
    }
    
    if(sum2>sum3)
    {
        cout<<"row"<<" "<<a<<" "<<sum2;
    }
    else if(sum2==sum3){
        cout<<"row"<<" "<<a<<" "<<sum2;
       
    }
    else{
         cout<<"column"<<" "<<b<<" "<<sum3;
    }   
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}