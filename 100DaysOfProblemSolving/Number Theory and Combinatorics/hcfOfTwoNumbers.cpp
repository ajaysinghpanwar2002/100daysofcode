#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout<<"The hcf of two numbers is"<<endl;
    cout<<gcd(a, b)<<endl;
    return 0;
}