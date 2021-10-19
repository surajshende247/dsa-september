#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    public:
    int *arr;
    int capacity;
    int size;

    MinHeap(int capacity)
    {
        size=0;
        this->capacity = capacity;
        arr = new int[capacity];
    }
    int getParent(int i){
        return (i-1)/2;
    }

    int getLeft(int i){
        return (2*i)+1;
    }

    int getRight(int i){
        return (2*i)+2;
    }

    void insert(int val){
        if(size==capacity)
               return;

        size++;
        arr[size-1] = val;

        for(int i=size-1; i!=0 && arr[getParent(i)]>arr[i];){
            swap(arr[i], arr[getParent(i)]);
            i = getParent(i);
        }
    }

    void traverseHeap()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{

    MinHeap h(10);

    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(20);

    h.traverseHeap();

    return 0;
}