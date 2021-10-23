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

 

    void heapify(int i)
    {
        int left = getLeft(i);
        int right = getRight(i);

        int smallest = i;

        if(left<size && arr[left]<arr[i]) 
            smallest = left;

        if(right<size && arr[right]<arr[smallest]) 
            smallest = right;

        if(smallest!=i)
        {
            swap(arr[i],arr[smallest]);
            heapify(smallest);
        }
    }

    bool isEmpty()
    {
        if(size<=0)
            return true;
        else
            return false;
    }

    //decrease key
    int extractMin()
    {
        if(size<=0)
        {
            return -1;
        }
        else if(size==1)
        {
            size=0;
            return arr[0];
        }
        int temp = arr[0];
        arr[0] = arr[size-1];
        size--;

        heapify(0);

        return temp;
    }
};

int main()
{

    MinHeap h(10);

    h.insert(3);
    h.insert(17);
    h.insert(5);
    h.insert(10);
    h.insert(1);

    while (h.isEmpty()==false)
    {
        cout<<h.extractMin()<<" ";
    }
    return 0;
}