#include <bits/stdc++.h>
using namespace std;

bool checkBalancedParanthesis(string expr)
{
    stack<char> s;
    int len = expr.length();

    for (int i = 0; i < len; i++)
    {
        char currSymbol = expr[i];

        if (currSymbol == '(' || currSymbol == '[' || currSymbol == '{')
        {
            s.push(currSymbol);
            continue;
        }

        if (s.empty())
        {
            return false;
        }

        char topElement;

        switch (currSymbol)
        {
        case ')':
            topElement = s.top();
            s.pop();
            if (topElement == '[' || topElement == '{')
                return false;
            break;

        case '}':
            topElement = s.top();
            s.pop();
            if (topElement == '[' || topElement == '(')
                return false;
            break;

        case ']':
            topElement = s.top();
            s.pop();
            if (topElement == '{' || topElement == '(')
                return false;
            break;
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    //string expr = "{()[]}";

    string expr = "{[)[]}";

    if (checkBalancedParanthesis(expr))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }

    return 0;
}