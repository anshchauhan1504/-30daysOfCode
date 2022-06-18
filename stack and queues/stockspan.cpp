// Afzal has been working with an organization called 'Money Traders' for the past few years. The organization is into the money trading business. His manager assigned him a task. For a given array/list of stock's prices for N days, find the stock's span for each day.
// The span of the stock's price today is defined as the maximum number of consecutive days(starting from today and going backwards) for which the price of the stock was less than today's price.
// For example, if the price of a stock over a period of 7 days are [100, 80, 60, 70, 60, 75, 85], then the stock spans will be [1, 1, 1, 2, 1, 4, 6].
//Sample Input 1:
//4
//10 10 10 10
//Sample Output 1:
//1 1 1 1 
#include <bits/stdc++.h>
#include<stack>
using namespace std;
int* stockSpan(int *price, int size) {
    stack<int> s; 
    int *output = new int[size]; 
    
    s.push(0); 
    output[0] = 1; 
    
    for(int i = 1; i < size; i++) { 
        // while the condition holds pop from stack
        while(!s.empty() and price[s.top()] < price[i]) {
            s.pop(); 
    	}
        
        // if stack is empty then we have the best price
    	if(s.empty()) {
     	output[i] = i + 1; 
    	} else { 
    		output[i] = i - s.top(); // else the span will be difference between the indices
    	  }
        //push the current index onto stack
    	s.push(i); 
 	} 
    return output;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
    return 0;
}
