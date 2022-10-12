/*
Reena had been given an array arr[] of positive integers of size N.Help her to find the value A.

A = arr[n]*arr[n] - arr[n-1]*arr[n-1] + arr[n-2]*arr[n-2] - ......... upto index 1


Input:
1. The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
2. The first line of each test case contains a single integer N.
3. The second line contains N space-separated positive integers represents array arr.

Output: For each test case, print the value of A in a single line

*/

#include <Bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;
while( T-- ){
    int N;
    cin >> N;
    vector<int> sumy;
    
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        sumy.push_back(a);
    }
    
    long long sum = 0;
    int k = 1;
    
    for(int i = N - 1; i >= 0; i--){
        sum = sum + (k * sumy[i] * sumy[i]);
        k = k*(-1);
    }
    
    cout << sum << endl;
    
}
return 0;
}