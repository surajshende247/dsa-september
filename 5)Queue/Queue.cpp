#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
int front, back, size, capacity;

int arr[50];

Queue(int capacity)
{
    this->capacity=capacity;
    size=0;
    front=back=-1;
}

void enqueue(int val)
{
    if(back==(capacity-1))
    {
        cout<<"Queue is full";
        return;
    }

    if(front==-1)
    {
        front=0;
        back=0;
        arr[front]=val;
    }
    else
    {
        ++back;
        arr[back]=val;
    }
}

int dequeue()
{
    if(front==-1)
    {
        cout<<"Queue is empty";
        return -1;
    }

    int frontElement=arr[front];

    back--;
    
    if(back==-1)
    {
        front=-1;
    }
    else
    {
         for(int i=front; i<=back; i++)
        {
            arr[i]=arr[i+1];
        }
    }

    return frontElement;
}


bool isFull()
{
    if(back==capacity-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool isEmpty()
{
    if(front==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


};

int main()
{
    Queue q(5);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    
    cout<<q.dequeue()<<endl;

    

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
   
    
    
    return 0;
}