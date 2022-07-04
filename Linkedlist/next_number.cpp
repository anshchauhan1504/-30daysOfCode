// Given a large number represented in the form of a linked list. Write code to increment the number by 1 in-place(i.e. without using extra space).
// Note: You don't need to print the elements, just update the elements and return the head of updated LL.
// Sample Input 1 :
// 3 9 2 5 -1
// Sample Output 1 :
// 3 9 2 6
#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;
Node* helper(Node *head)
{
	//base case -> increment the last number by one
	if (head->next == NULL)
	{
		head->data++;
		return head;
	}

	head->next = helper(head->next);

	if (head->next->data > 9)
	{
		head->next->data = 0;
		head->data += 1;
	}

	return head;
}

Node* NextLargeNumber(Node *head)
{
	// recursion will incerement the number accordingly
	head = helper(head);

	//if the first element is > 9 then we  set its value to 0 and add a new node with value 1 to it 
	if (head->data > 9)
	{
		Node *newNode = new Node(1);
		head->data = 0;
		newNode->next = head;
		head = newNode;
	}

	return head;
}

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}