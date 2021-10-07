#include<bits/stdc++.h>
using namespace std;
void fun(int num)
{
    if(num>0)
    {
        fun(num-1);
    }   
    cout<<num<<" Hi \n";
}
int main()
{
    fun(10);
    return 0;
}