#include<bits/stdc++.h>
using namespace std;
int sumOfN(int num)
{
    if(num == 0) 
        return 0;
    else
       return num +  sumOfN(num-1);
}

int main()
{
    int n=2;
    cout<<sumOfN(n);
    return 0;
}