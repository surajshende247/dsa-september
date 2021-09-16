#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {2, 6, 8, 10, 21, 45, 66, 83, 89, 99};

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}