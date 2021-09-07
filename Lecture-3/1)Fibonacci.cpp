#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first = 0, second = 1, next;

    int n = 15;
    cout << first << ", ";
    cout << second << ", ";

    for (int i = 0; i < n - 2; i++)
    {
        next = first + second;
        cout << next << ", ";

        first = second;
        second = next;
    }

    return 0;
}