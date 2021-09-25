#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 786;
    int rev = 0;
    while (num > 0)
    {
        int rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    cout << rev;
    return 0;
}