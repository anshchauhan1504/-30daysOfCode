#include <bits/stdc++.h>
using namespace std;
template <typename t>
class Node
{
public:
    Node<t> *next;
    t data;
    Node(t data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename v>
class stack_ll
{
    Node<v> *head;
    int size;

public:
    stack_ll()
    {
        head = NULL;
        size = 0;
    }
    int getsize()
    {
        return size;
    }
    bool isempty()
    {
        return size == 0;
    }
    void push(v elem)
    {
        Node<v> *newnode = new Node<v>(elem);
        newnode->next = head;
        head = newnode;
        size++;
    }
    v pop()
    {
        if (isempty())
        {
            return 0;
        }
        v ans = head->data;
        Node<v> *t = head;
        head = head->next;
        delete t;
        size--;
        return ans;
    }
    v top()
    {
        if (isempty())
        {
            return 0;
        }
        return head->data;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack_ll<int> s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(50);
    s.push(100);
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getsize()<<endl;
    cout<<s.isempty()<<endl;
    return 0;
}