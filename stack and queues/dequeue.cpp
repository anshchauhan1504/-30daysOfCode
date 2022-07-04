// You need to implement a class for Dequeue i.e. for double ended queue. In this queue, elements can be inserted and deleted from both the ends.
// You don't need to double the capacity.
// You need to implement the following functions -
// 1. constructor
// You need to create the appropriate constructor. Size for the queue passed is 10.
// 2. insertFront -
// This function takes an element as input and insert the element at the front of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
// 3. insertRear -
// This function takes an element as input and insert the element at the end of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
// 4. deleteFront -
// This function removes an element from the front of queue. Print -1 if queue is empty.
// 5. deleteRear -
// This function removes an element from the end of queue. Print -1 if queue is empty.
// 6. getFront -
// Returns the element which is at front of the queue. Return -1 if queue is empty.
// 7. getRear -
// Returns the element which is at end of the queue. Return -1 if queue is empty.
// Sample Input 1:
// 5 1 49 1 64 2 99 5 6 -1
// Sample Output 1:
// -1
// 64
// 99
#include<iostream>
using namespace std;

class Deque {
    int  *data;
    int  frontIndex;
    int  rearIndex;
    int  capacity;

public :
    Deque(int size) {
        data = new int[size];
        frontIndex = -1;
        rearIndex = 0;
        capacity = size;
    }
 
	bool isFull() {
    	return ((frontIndex == 0 and rearIndex == capacity - 1) or frontIndex == rearIndex + 1);
	}
 
	bool isEmpty() {
    	return (frontIndex == -1);
	}

	void insertFront(int element) {
    	if (isFull()) {
       	 cout << -1 << endl;
        	return;
    	}
 
    
    	if (frontIndex == -1){
        	frontIndex = 0;
        	rearIndex = 0;
    	} else if (frontIndex == 0) {
        	frontIndex = capacity - 1 ;
    	} else {
        	frontIndex--;
    	}
    	data[frontIndex] = element;
	}
    
	void insertRear(int element) {
    	if (isFull()) {
        	cout << -1 << endl;
        	return;
    	}
    	if (frontIndex == -1) {
        	frontIndex = 0;
        	rearIndex = 0;
    	} else if (rearIndex == capacity - 1) {
        	rearIndex = 0;
    	} else {
        	rearIndex++;
    	}
    
 		data[rearIndex] = element;
	}
 
	void deleteFront() {
    	if (isEmpty()){
        	cout << -1 << endl;
        	return;
    	}
    	if (frontIndex == rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        } else {
            if (frontIndex == capacity - 1) {
                frontIndex = 0;
            } else {
                frontIndex = frontIndex + 1;
            }
    	}
    }
 
    void deleteRear() {
        if (isEmpty()) {
            cout << -1 << endl ;
            return ;
        }

        if (frontIndex == rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        } else if (rearIndex == 0) {
            rearIndex = capacity - 1;
        } else {
            rearIndex--;
        }
    }

    int getFront(){
        if (isEmpty()) {
            return -1 ;
        }
        return data[frontIndex];
    }

    int getRear() {
        if(isEmpty() or rearIndex < 0) {
            return -1 ;
        }
        return data[rearIndex];
    }
    
};

int main()
{
    Deque dq(10);
    int choice,input;
    while(true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                dq.insertFront(input);
                break;
            case 2:
                cin >> input;
                dq.insertRear(input);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                cout << dq.getFront() << "\n";
                break;
            case 6:
                cout << dq.getRear() << "\n";
                break;
            default:
                return 0;
        }
    }
    
    return 0;
}
