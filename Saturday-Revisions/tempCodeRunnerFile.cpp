#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 12321;
    //int num = 786;
    int temp = num;
    int rev = 0;
    while (num > 0)
    {
        int rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    if (rev == temp)
    {
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "Number is not Palindrome";
    }

    return 0;
}