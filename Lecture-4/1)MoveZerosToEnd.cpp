#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int arr[10] = {0, 51, 8, 0, 65, 9, 0, 73, 44, 87};
    int left = 0, right = 0;
    while (right < n)
    {
        if (arr[right] == 0)
        {
            right++;
        }
        else
        {
            arr[left] = arr[right];
            left++;
            right++;
        }
    }
    for (int i = left; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}