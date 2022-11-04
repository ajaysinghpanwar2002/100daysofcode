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
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; i++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}