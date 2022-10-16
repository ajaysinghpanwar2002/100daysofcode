// prefixSum[i] = arr[0]+arr[1]+arr[2]..arr[i]

/*
Given an array arr[] of size n. Given Q queries and in each query given L and R, print sum of array elements from index L to R.
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int a[N];
int pf[N];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pf[i] = pf[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        // because of this it will run in 10^5 iterations so it wont run in 1 sec we need to optimize it.
        for(int i = l; i <= r; i++){
            sum += a[i];
        }
        // precomputed the result 
        cout<<pf[r]-pf[l-1]<<endl;
        cout << sum << endl;
    }
}