#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8] = {8, 7, 10, 5, 15, 9, 13, 8};

    for (int i = 1; i <= 6; i++)
    {
        int currentWindowSum = arr[i - 1] + arr[i] + arr[i + 1];
        if (currentWindowSum == 30)
        {
            //i, i-1, i+1
            cout << "[" << i - 1 << "," << i << "," << i + 1 << "]" << endl;
        }
    }

    return 0;
}