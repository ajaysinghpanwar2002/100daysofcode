#include <bits/stdc++.h>
using namespace std;

void leastPrimeFactor(int n)
{
    // creating a vector to store least primes and initializing all enteries as 0
    vector<int> leastPrime(n + 1, 0);

    // we need to print i for 1;
    leastPrime[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        // if leastprime[i] == 0, means its i is a prime number
        if (leastPrime[i] == 0)
        {
            // marking the prime as its own Lpf
            leastPrime[i] = i;
            // marking it as a divisor for all its multiples if not already marked
            for (int j = i * i; j <= n; j += i)
            {
                if (leastPrime[j] == 0)
                {
                    leastPrime[j] = i;
                }
            }
            // print least prime factor of numbers till n
            for (int i = 1; i <= n; i++)
            {
                cout << "Least prime factor of" << i << ":" << leastPrime[i] << "\n";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    leastPrimeFactor(n);
    return 0;
}