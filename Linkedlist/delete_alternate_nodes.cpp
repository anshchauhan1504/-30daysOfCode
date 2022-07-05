// Given a Singly Linked List of integers, delete all the alternate nodes in the list.
// Example:
// List: 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> null
// Alternate nodes will be:  20, 40, and 60.

// Hence after deleting, the list will be:
// Output: 10 -> 30 -> 50 -> null
// Sample Input 1:
// 1 2 3 4 5 -1
// Sample Output 1:
// 1 3 5
#include <iostream>

class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    ~Node() {
        if(next) {
            delete next;
        }
    }
};

using namespace std;
void deleteAlternateNodes(Node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* oddPtr = head;
    Node* evenPtr=NULL; 
    while(oddPtr->next!=NULL){
        evenPtr = oddPtr->next;
        if(evenPtr->next==NULL){
            oddPtr->next=NULL;
            return;
        }
        oddPtr->next = evenPtr->next;
        oddPtr = oddPtr->next;
        delete evenPtr;
    }
}
Node* takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
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
    cout << endl;
}

int main() {
    Node *head = takeinput();
    deleteAlternateNodes(head);
    print(head);
    delete head;
    return 0;
}