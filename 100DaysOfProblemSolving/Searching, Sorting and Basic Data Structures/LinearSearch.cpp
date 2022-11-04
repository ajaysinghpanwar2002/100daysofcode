#include <iostream>
using namespace std;
// iterative approach
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

// recursive approach
int linearsearch(int arr[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    else if (arr[n - 1] == x)
    {
        return n - 1;
    }
    else
    {
        int ans = linearsearch(arr, n - 1, x);
        return ans;
    }
}

int main()
{
    int n;
    cout << "enter the size of array you want to create" << endl;
    cin >> n;
    int x;
    cout << "enter element ot be searched";
    cin >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the elements of array" << endl;
        cin >> arr[i];
    }
    // iterative call
    int result = search(arr, n, x);
    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;

    // recursive call
    int ans = linearsearch(arr, 5, x);
    if (ans == -1)
    {
        cout << "The element " << x << " is not found." << endl;
    }
    else
    {
        cout << "The element " << x << " is found at " << ans << " index of the given array." << endl;
    }
    return 0;
}