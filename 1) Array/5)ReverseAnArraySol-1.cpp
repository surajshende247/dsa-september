#naive solution with extra space
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {5, 10, 15, 20, 25, 30};
    int ptr1 = 5;

    int temp[6];
    int ptr2 = 0;

    for (int i = 0; i < 6; i++)
    {
        temp[ptr2] = arr[ptr1];
        ptr1--;
        ptr2++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << temp[i] << ",";
    }
    return 0;
}
