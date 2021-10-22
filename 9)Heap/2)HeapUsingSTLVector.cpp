#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> maxHeap;
    maxHeap.push_back(8);
    maxHeap.push_back(7);
    maxHeap.push_back(9);
    maxHeap.push_back(1);
    maxHeap.push_back(50);

    make_heap(maxHeap.begin(), maxHeap.end());

    //traversing vectors
    for(auto i=maxHeap.begin(); i!=maxHeap.end(); i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}