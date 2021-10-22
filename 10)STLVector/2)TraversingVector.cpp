#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //traversing vectors
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }

    //front element
    cout<<"\n Front Element: "<<v.front()<<endl;

     //back element
    cout<<"\n Back Element: "<<v.back()<<endl;

    return 0;
}