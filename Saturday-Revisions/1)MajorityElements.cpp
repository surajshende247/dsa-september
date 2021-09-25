#include <bits/stdc++.h>
using namespace std;
int main()
{
    //int arr[8] = {8, 8, 14, 8, 8, 7, 3, 8};
    int arr[8] = {7, 3, 14, 21, 8, 7, 3, 99};
    int n = 8;

    int majority = -1;

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == curr)
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            majority = curr;
            break;
        }
    }
    cout << "Majority Element: " << majority << endl;
    return 0;
}