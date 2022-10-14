

#include <bits/stdc++.h>
using namespace std;

// pair struct is used to return two values from getMinMax()

struct Pair
{
    int min;
    int max;
};

// Maximum and minimum of an array using Linear search:
Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    // if there is only one element then return it as min and max both
    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    // if there is more than one element then initialize min and max

    if (arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.min = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.max = arr[i];
        }
    }
    return minmax;
}

// Maximum and minimum of an array by comparing in pairs:
struct Pair getminmax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    // if array has even number of elements then initilize the first two elements as min and max

    if (n % 2 == 0)
    {
        if (arr[0] > arr[1])
        {
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        // initilizing i = 2;
        i = 2;
    }

    // if array has odd number of elements then initilize the first element as minimum and maximum
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        // initilizing i = 1;
        i = 1;
    }

    // in while loop, pick elements in pair and compare the max and min so far
    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
            {
                minmax.min = arr[i];
            }
            if (arr[i] < minmax.min)
            {
                minmax.max = arr[i + 1];
            }
        }
        else
        {
            if (arr[i + 1] > minmax.max)
                minmax.max = arr[i + 1];

            if (arr[i] < minmax.min)
                minmax.min = arr[i];
        }

        // incrementing the index by 2 as two elements are processed in loop
        i += 2;
    }
    return minmax;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Maximum and minimum of an array using Linear search:
    Pair minmax = getMinMax(arr, n);
    // Maximum and minimum of an array by compairing pairs
    Pair minmax = getminmax(arr, n);
    
    cout << minmax.min << " " << minmax.max;
    return 0;
}
