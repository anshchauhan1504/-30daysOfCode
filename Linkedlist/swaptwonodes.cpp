// You have been given a singly linked list of integers along with two integers, 'i,' and 'j.' Swap the nodes that are present at the 'i-th' and 'j-th' positions.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case or query contains the elements of the singly linked list separated by a single space.

// The second line of input contains two integer values 'i,' and 'j,' respectively. A single space will separate them.
//  Remember/consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
// Output format :
// For each test case/query, print the elements of the updated singly linked list.

// Output for every test case will be printed in a seperate line.
// Sample Input 1 :
// 1
// 3 4 5 2 6 1 9 -1
// 3 4
// Sample Output 1 :
// 3 4 5 6 2 1 9
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
Node *swapNodes(Node *head, int i, int j)
{
    if (i > j)
    { // swapping using two variables;
        i = i + j;
        j = i - j;
        i = i - j;
    }

    // Find Nodes
    if (i == 0)
    {
        if (j == 1) // first case when first node is at head and second node is at head+1
        {
            Node *curr1 = head;
            Node *curr2 = head->next;
            curr1->next = curr2->next;
            curr2->next = curr1;
            return curr2;
        }

        // this is second case
        Node *current1 = head;
        Node *temp = head;
        for (int c = 1; c < j; c++)
        {
            temp = temp->next;
        }

        Node *nextnode = head->next;
        Node *current2 = temp->next;

        head->next = current2->next;
        temp->next = head;
        current2->next = temp;
        return current2;
    }

    if (j - i == 1) // third case
    {
        Node *temp = head;

        for (int c = 1; c < i; c++)
        {
            temp = temp->next;
        }

        Node *current1 = temp->next;
        Node *current2 = current1->next;

        current1->next = current2->next;
        temp->next = current2;
        current2->next = current1;
        return head;
    }

    // general case
    Node *temp1 = head;
    Node *temp2 = head;

    for (int c = 1; c < i; c++)
        temp1 = temp1->next;

    for (int c = 1; c < j; c++)
        temp2 = temp2->next;

    Node *cur1 = temp1->next;
    Node *cur2 = temp2->next;

    Node *temp = cur1->next;

    cur1->next = cur2->next;
    temp2->next = cur1;
    temp1->next = cur2;
    cur2->next = temp;

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
        int i, j;
        Node *head = takeinput();
        cin >> i;
        cin >> j;
        head = swapNodes(head, i, j);
        print(head);
    }
    return 0;
}