// Given a string S (that can contain multiple words), you need to find the word which has minimum length.
// Note : If multiple words are of same length, then answer will be first minimum length word in the string.
// Words are seperated by single space only.
// Input Format :
// String S
// Output Format :
// Minimum length word
// Sample Input 1 :
// this is test string
// Sample Output 1 :
// is
#include <bits/stdc++.h>
using namespace std;
void minLengthWord(char input[], char output[])
{

    int ms = -1;
    int ml = INT_MAX;
    int currentstart = 0;
    int i = 0;
    int len = strlen(input);
    for (; i < len; i++)
    {
        if (input[i] == ' ')
        {
            int currentwordlength = i - currentstart;
            if (currentwordlength < ml)
            {
                ms = currentstart;
                ml = currentwordlength;
            }
            currentstart = i + 1;
        }
    }
    if (ms == -1)
    {
        for (int i = 0; i <= len; i++)
        {
            output[i] = input[i];
        }
    }
    else
    {
        int currentwordlength = i - currentstart;
        if (currentwordlength < ml)
        {
            ms = currentstart;
            ml = currentwordlength;
        }
        int j = 0;
        for (int i = ms; i < ms + ml; i++)
        {
            output[j] = input[i];
            j++;
        }
        output[j] = '\0';
    }
}

int main()
{
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLengthWord(ch, output);
    cout << output << endl;
}
