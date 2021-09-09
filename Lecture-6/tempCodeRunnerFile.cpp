#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    /*
        s: starting row
        e: ending row
        l: left column
        r: right column
     */
    int l = 0, r = 3, s = 0, e = 3;

    while (s < e && l < r)
    {

        //for the first row
        for (int i = l; i <= r; i++)
        {
            cout << arr[s][i] << ", ";
        }
        s++;

        //print right column
        for (int i = s; i <= e; i++)
        {
            cout << arr[i][r] << ", ";
        }
        r--;

        //for bottom row
        for (int i = r; i >= l; i--)
        {
            cout << arr[e][i] << " ";
        }
        e--;

        //first column
        for (int i = e; i >= s; i--)
        {
            cout << arr[i][l] << " ";
        }
        l++;
    }

    return 0;
}