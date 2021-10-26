#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int n1 = m-l + 1;
    int left[n1];
    for(int i=0; i<n1; i++)
    {
        left[i] = arr[l+i];
    }

    int n2 = r-m;    
    int right[n2];
    for(int i=0; i<n2; i++)
    {
        right[i]=arr[m+1+i];
    }

    int i=0, j=0, p=l;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[p]=left[i];
            i++;
        }
        else
        {
            arr[p]=right[j];
            j++;
        }
        p++;
    }

    while(i<n1)
    {
        arr[p]=left[i];
        p++;
        i++;
    }

    while(j<n2)
    {
        arr[p]=right[j];
        p++;
        j++;
    }


}

void mergeSort(int arr[], int l, int r)
{
     if(r>l)
     {
         int m = (l+r)/2;
         mergeSort(arr,l,m);
         mergeSort(arr,m+1,r);
         merge(arr,l, m, r);
     }
}

int main(){

    int arr[]={10, 5, 30, 15, 7};

    mergeSort(arr, 0, 4);

    for(int i: arr)
    {
        cout<<i<<" ";
    }

    return 0;
}