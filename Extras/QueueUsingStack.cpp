#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    stack<int> s1, s2;

    void enqueue(int val){
        s1.push(val);
    }

    int dequeue(){
        while(!s1.empty()){
            int data = s1.top();
            s1.pop();
            s2.push(data);
        }

        int frontElement = s2.top();
        s2.pop();

        while(!s2.empty()){
            int data = s2.top();
            s2.pop();
            s1.push(data);
        }

        return frontElement;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<q.dequeue();
    cout<<q.dequeue();
    cout<<q.dequeue();


    return 0;
}