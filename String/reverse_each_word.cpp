// Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
// Example:
// Input Sentence: "Hello, I am Aadil!"
// The expected output will print, ",olleH I ma !lidaA".
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// emocleW ot gnidoC sajniN
#include <iostream>
#include <cstring>
using namespace std;
void reverse(char input[],int s,int e)
{
    int i=s;
    int j=0;
    int count = e;
    while(i<=count)
    {
        if(input[i]==' ' || i==count)
        {
            int end = i-1;
            while(j<end){
                char temp=input[end];
                input[end--]=input[j];
                input[j++]=temp;
            }
            j=i+1;
        }
        i++;
    }
    
}
void reverseEachWord(char input[]) {
   
   reverse(input,0,strlen(input));

}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}