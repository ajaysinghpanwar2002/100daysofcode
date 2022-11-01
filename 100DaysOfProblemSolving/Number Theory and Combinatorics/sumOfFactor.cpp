#include <bits/stdc++.h>
using namespace std;

int divSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // sum of divisors
    int result = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // if both divisors are same then add it once else add both
            if (i == (n / i))
                result += i;
            else
            {
                result += (i + n / i);
            }
        }
    }
    return (result + n + 1);
}
int main()
{
    int n;
    cin>>n;
    cout<< divSum(n);
    return 0;
}