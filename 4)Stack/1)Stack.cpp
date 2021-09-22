#include <bits/stdc++.h>
using namespace std;

#define MAX 50

class Stack
{
public:
    int top;
    int arr[MAX];

    Stack()
    {
        top = -1;
    }

    void push(int val)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow";
        }
        else
        {
            ++top;
            arr[top] = val;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return 0;
        }
        else
        {
            int x = arr[top];
            --top;
            return x;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }

        /*
        return (top==-1)?true:false;
        */

        /*
        return (top==-1);
       */
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Popped Value: " << s.pop()<<endl;
    cout << "Is Empty: " << s.isEmpty()<<endl;
    s.push(40);
    cout << "\nPopped Value: " << s.pop()<<endl;
    cout << "Popped Value: " << s.pop()<<endl;
    cout << "Popped Value: " << s.pop()<<endl;
    cout << "Popped Value: " << s.pop()<<endl;
    return 0;
}