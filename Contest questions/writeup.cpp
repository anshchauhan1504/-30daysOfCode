// Shubh is the BitByBit club's content team lead, and he was looking over a very significant write-up produced by one of his team members. Shubh discovered that the club name "BitByBit" was written as "B3" everywhere in the article. Shubh's position as lead may be harmed if the club president reads this article. So now help Shubh in updating this article by changing "B3" with "BitByBit" (case sensitive) as soon as possible. Note that you will be given a single string and all the spaces in the statement is represented as '_' (single underscore).

// Input Format

// The first and only line of each test case contains a single string S each statement from the article.

// Constraints

// 2 <= length of S <= 2000

// Output Format

// For each testcase, output the corrected statement. Output the same statement if it has not errors.

// Sample Input 0

// All_the_events_of_B3_club_is_updated_on_B3_official_website.
// Sample Output 0

// All_the_events_of_BitByBit_club_is_updated_on_BitByBit_official_website.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    int len=s1.length();
    for(int i=0;i<len;i++)
    {
        if(s1[i]=='B' && s1[i+1]=='3' )
        {
            s1.erase(i+1,1);
            cout<<"BitByBit";
        }
        else
        {
            cout<<s1[i];
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;
}