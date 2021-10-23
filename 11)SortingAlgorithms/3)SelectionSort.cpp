#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {8, 14, 7, 6, 2, 1, 20, 50, 3, 4};
    int n = 10;

    cout << "Before Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    cout << "\nAfter Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}