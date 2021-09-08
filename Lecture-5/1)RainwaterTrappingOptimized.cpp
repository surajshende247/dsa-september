#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {7, 2, 3, 6, 2, 5};
    int n = 6;

    int totalWater = 0;

    int leftH[6];

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        leftH[i] = max;
    }

    int rightH[6];
    max = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > max)
            max = arr[i];
        rightH[i] = max;
    }

    for (int i = 1; i < n - 1; i++)
    {
        int minHeight = min(leftH[i], rightH[i]);

        if (minHeight >= arr[i])
            totalWater = totalWater + (minHeight - arr[i]);
    }

    cout << "Total Water Trapped: " << totalWater << endl;

    return 0;
}