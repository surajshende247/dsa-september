//Binary Search
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {8, 11, 17, 34, 51};
    int searchElement = 17;
    int start = 0;
    int end = 4;

    int flag = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == searchElement)
        {
            flag = mid;
            break;
        }
        else if (searchElement > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (flag == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << flag;
    }

    return 0;
}