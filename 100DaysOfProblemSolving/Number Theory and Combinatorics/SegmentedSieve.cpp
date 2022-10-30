#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
bool sieve[N + 1];
void createSeive()
{
    for (int i = 2; i <= N; i++)
    {
        sieve[i] = true;
    }
    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * 1; j <= N; j++)
            {
                sieve[j] = false;
            }
        }
    }
}
vector<int> generatePrimes(int N)
{
    vector<int> ds;
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i] == true)
        {
            ds.push_back(i);
        }
    }
    return ds;
}
int main()
{
    createSeive();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        // step1 : generate all primes till sqrt(r)
        vector<int> primes = generatePrimes(sqrt(r));
        // step2 : create a dummy array of size of r-l+1 and make everyone as 1
        int dummy[r - l + 1];
        for (int i = 0; i < r - l + 1; i++)
        {
            dummy[i] = 1;
        }
        // step3 : for all prime numbers mark its multiples as false
        for (auto pr : primes)
        {
            int firstMultiple = (l / pr) * pr;
            if (firstMultiple < l)
                firstMultiple += pr;
            for (int j = max(firstMultiple, pr * pr); j <= r; j += pr)
            {
                dummy[j - l] = 0;
            }
        }
        // step4 : get all prime numbers
        for (int i = l; i <= r; i++)
        {
            if (dummy[i - 1] == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}