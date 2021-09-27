#include <bits/stdc++.h>
using namespace std;

class Stack
{
    queue<int> q1,q2;
    public:

    void push(int val)
    {
        q2.push(val);

        while (!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        while (!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        int topData = q1.front();
        q1.pop();
        return topData;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<" ";
    cout<<s.pop()<<" ";
    cout<<s.pop()<<" ";
    return 0;
}