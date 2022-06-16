#include <bits/stdc++.h>
using namespace std;
template <typename x>
class queue_array{
    x *data;
    int ni;
    int fi;
    int size;
    int capacity;
    public:
        queue_array(int s)
        {
            data=new x[s];
            ni=0;
            fi=-1;
            size=0;
            capacity=s;
        }
        int getsize()
        {
            return size;
        }
        bool isEmpty()
        {
            return size==0;
        }
        void enqueue(x element)
        {
            if(size==capacity)
            {
                x *newdata =new x[2 * capacity];
                int j=0;
                for(int i=fi; i<capacity; i++)
                {
                    newdata[j]=data[i];//here we are putting the elements which are on first index in data at 0th index in newdata so that our dynamic array
                    j++;                   // is maintain in the same way as elements are inserted in our queue.
                }
                for(int i=0; i<fi; i++)
                {
                    newdata[j]=data[i];
                    j++;
                }
                delete [] data;
                data=newdata;
                fi=0;
                ni=capacity;
                capacity*=2;
            }
            data[ni]=element;
            ni=(ni+1)%capacity;
            if(fi==-1)
            {
                fi=0;
            }
            size++;
        }
        x front()
        {
            if(isEmpty())
            {
                cout<<"Queue is empty!"<<endl;
                return 0;
            }
            return data[fi];
        }
        x dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue is empty!"<<endl;
                return 0;
            }
            x ans=data[fi];
            fi=(fi+1)%capacity;
            size--;
            if(size==0)
            {
                fi=-1;
                ni=0;
            }
            return ans;
        }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    queue_array<int> q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.front() << endl;
    return 0;
}