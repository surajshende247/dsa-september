#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {7, 2, 3, 6, 2, 5};
    int n = 6;

    int totalWater = 0;

    for (int i = 1; i < n - 1; i++)
    {
        //left highest for current block
        int leftH = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > leftH)
                leftH = arr[j];
        }

        //right highest for current block
        int rightH = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > rightH)
                rightH = arr[j];
        }

        int minHeight = min(leftH, rightH);
        if (minHeight >= arr[i])
            totalWater = totalWater + (minHeight - arr[i]);
    }

    cout << "Total Water Trapped: " << totalWater << endl;

    return 0;
}