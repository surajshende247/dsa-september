#include <bits/stdc++.h>
using namespace std;

void showQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    showQueue(q);

    return 0;
}