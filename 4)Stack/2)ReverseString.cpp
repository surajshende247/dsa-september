#include <bits/stdc++.h>
using namespace std;

#define MAX 50

class Stack
{
public:
    int top;
    char arr[MAX];

    Stack()
    {
        top = -1;
    }

    void push(char val)
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

    char pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return '*';
        }
        else
        {
            char x = arr[top];
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

    }
};

int main()
{
    Stack s;
    string str;
    cout<<"Enter String to Reverse: ";
    cin>>str;

    int n=str.length();
    for(int i=0; i<n; i++)
    {
        s.push(str[i]);
    }

    while(s.isEmpty()==false)
    {
        cout<<s.pop();
    }
     
    return 0;
}