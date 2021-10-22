#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);

    //individual access by index
    cout<<v[0]<<" "<<v[1];
    
    return 0;
}