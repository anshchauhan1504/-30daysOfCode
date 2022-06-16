#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class Queue_ll
{
    Node *head;
    Node *tail;
    Node *temp;
    int size;

public:
    Queue_ll()
    {
        head = NULL;
        tail = NULL;
        temp = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }
    void enqueue(int data)
    {

        Node *newnode = new Node(data);
        if (size == 0)
        {
            head = newnode;
            tail = newnode;
            size++;
            return;
        }
        tail->next = newnode;
        tail = newnode;
        size++;
    }

    int dequeue()
    {
        if (size == 0)
        {
            return -1;
        }
        int value = head->data;
        temp = head;
        head = head->next;
        size--;
        delete temp;
        return value;
    }

    int front()
    {
        if (size == 0)
        {
            return -1;
        }
        return head->data;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Queue_ll q;
    q.enqueue(50);
    q.enqueue(100);
    q.enqueue(150);
    cout << q.dequeue() << endl;
    cout << q.front() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
    return 0;
}