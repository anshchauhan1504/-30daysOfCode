// You have been given a singly linked list of integers along with two integers, 'M,' and 'N.' Traverse the linked list such that you retain the 'M' nodes, then delete the next 'N' nodes. Continue the same until the end of the linked list.
// To put it in other words, in the given linked list, you need to delete N nodes after every M nodes.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case or query contains the elements of the singly linked list separated by a single space.

// The second line of input contains two integer values 'M,' and 'N,' respectively. A single space will separate them.
//  Remember/Consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
// Output format :
// For each test case/query, print the elements of the updated singly linked list.

// Output for every test case will be printed in a seperate line.
// Sample Input 1 :
// 1
// 1 2 3 4 5 6 7 8 -1
// 2 2
// Sample Output 1 :
// 1 2 5 6
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *skipMdeleteN(Node *head, int M, int N)

{

    if (M == 0)
        return 0;
    Node *t1 = head, *t2;
    int c1;

    while (t1)
    {
        for (c1 = 1; c1 < M &&
                     t1 != NULL;
             c1++)
            t1 = t1->next;

        if (t1 == NULL)
            return head;

        t2 = t1->next;
        for (c1 = 1; c1 <= N && t2 != NULL; c1++)
        {
            t2 = t2->next;
        }

        t1->next = t2;

        t1 = t2;
    }

    return head;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    }
    return 0;
}