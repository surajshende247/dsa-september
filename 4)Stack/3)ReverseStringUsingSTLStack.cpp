#include<bits/stdc++.h>
using namespace std;

int main()
{
    //stack which will store characters
    stack<char> mystack;

    string str;
    cout<<"Enter String: ";
    cin>>str;

    int len = str.length();
    for(int i=0; i<len; i++)
    {
        mystack.push(str[i]);
    }

    cout<<"Reversed String is: ";

    while(mystack.empty()==false)
    {
        cout<<mystack.top();
        mystack.pop();
    }

}
