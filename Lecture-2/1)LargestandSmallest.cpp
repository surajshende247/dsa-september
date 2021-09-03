#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {12, 34, 67, 8, 4, 78, 52, 78, 65, 90};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;

    return 0;
}