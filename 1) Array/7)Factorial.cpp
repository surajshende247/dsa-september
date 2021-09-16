//Factorial
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    n = 5;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial: " << fact << endl;

    return 0;
}