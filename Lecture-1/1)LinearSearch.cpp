//Linear Search
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {12, 43, 65, 4, 78, 65, 9, 15, 32, 45};
    //cout << "Enter Element to Search: ";
    int searchElement = 65;
    //cin >> searchElement;
    int flag = -1;
    for (int i = 0; i < 10; i++)
    {
        if (searchElement == arr[i])
        {
            flag = i;
            break;
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