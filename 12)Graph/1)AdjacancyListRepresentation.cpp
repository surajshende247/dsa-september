#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>  arr[6];

    arr[0].push_back(1);

    arr[1].push_back(2);
    arr[1].push_back(0);
    arr[1].push_back(4);

    arr[2].push_back(3);
    arr[2].push_back(1);
    arr[2].push_back(5);
    arr[2].push_back(4);

    arr[3].push_back(2);
    
    arr[4].push_back(2);
    arr[4].push_back(1);

    arr[5].push_back(2);

    for(int i=0; i<6; i++)
    {
        cout<<"Node: "<<i<<endl;
        for(int node: arr[i])
        {
            cout<<node<<" ";
        }
        cout<<endl;
    }

    return 0;
}