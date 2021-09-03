//without using extra space
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {5, 10, 15, 20, 25, 30};

    int ptr1 = 0;
    int ptr2 = 5;

    while (ptr1 < ptr2)
    {
        swap(arr[ptr1], arr[ptr2]);
        ptr1++;
        ptr2--;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}