#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {8, 14, 7, 6, 2, 1 ,20, 50, 3, 4};

    int n=10;

    cout<<"Before Sort: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"\nAfter Sort: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}