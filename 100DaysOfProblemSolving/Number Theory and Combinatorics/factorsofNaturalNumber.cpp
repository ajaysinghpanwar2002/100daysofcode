#include <bits/stdc++.h>
using namespace std;

// naive approach
void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << " " << i;
}

// better approach
void printdivisors(int n)
{
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
                cout << " " << i;

            else // Otherwise print both
                cout << " " << i << " " << n / i;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //naive
        printDivisors(n);
        //better
        printdivisors(n);
    }
    return 0;
}
