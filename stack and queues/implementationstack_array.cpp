#include<bits/stdc++.h>
using namespace std;
template<typename t>
class stack1{
    t *next;
    int ni;
    int capacity;
    public:
        stack1()
        {
            next=new int[4];
            ni=0;
            capacity=4;  
        }
        int getsize()
        {
            return ni;
        }
        bool isEmpty()
        {
            return ni==0;
        }
        void push(t element)
        {
            if(ni==capacity)
            {
                t *newdata=new t[2*capacity];
                for(int i=0;i<capacity;i++)
                {
                    newdata[i]=next[i];
                } 
                capacity*=2;
                delete[] next;
                next=newdata;
            }
            next[ni]=element;
            ni++;
        }
        t pop()
        {
            if(isEmpty())
            {
                return 0;
            }
            ni--;
            return next[ni];
        }
        t top()
        {
            if(isEmpty())
            {
                return 0;
            }
            return next[ni-1];
        }
};
int main(){
stack1<int>s;
s.push(10);
s.push(20);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.top()<<endl;
return 0;
}