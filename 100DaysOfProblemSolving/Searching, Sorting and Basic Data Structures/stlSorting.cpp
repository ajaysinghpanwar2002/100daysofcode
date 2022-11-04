#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the count of numbers" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element of array" << endl;
        cin >> arr[i];
    }
    sort(arr, arr + n);

    cout << "\nArray after sorting using default sort is : \n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}