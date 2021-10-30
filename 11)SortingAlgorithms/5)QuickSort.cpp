#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        do{
            i++;
        }
        while(arr[i]<=pivot);

        do{
            j--;
        }
        while(arr[j]>pivot);
        
        swap(arr[i],arr[j]);
    }
    if(i<j)
    {
        swap(arr[low],arr[j]);
    }
    return j;
}

void QuickSort(int arr[], int low, int high)
{ 
    if(low<high)
    {
        int p = Partition(arr, low, high);
        QuickSort(arr, low, p-1);
        QuickSort(arr, p+1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 99, 8, 9, 1, 5, 50, 60, 27};

    //before sort
    cout << "Before Sorting: ";
     for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    QuickSort(arr, 0, 9);   

    //after sort
    cout << "\nAfter Sorting: ";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}