// Convert an array to reduced form

/*
The idea is to sort the given array and use an unordered map to store the reduced form of each value of array then update the whole array to its reduced form using values from unordered map
*/

#include <bits/stdc++.h>
using namespace std;

void convert(int array[], int n)
{
    // create a temp array and copy contents of arr[] to temp
    int temp[n];
    memcpy(temp, array, n * sizeof(int));

    // sort temp array
    sort(temp, temp + n);

    // create a hash table
    unordered_map<int, int> umap;

    // one by one insert elements of sorted temp[] and assign them values from 0 to n-1

    int val = 0;
    for (int i = 0; i < n; i++)
    {
        umap[temp[i]] = val++;
    }

    // converting array to take postions from  umap

    for (int i = 0; i < n; i++)
    {
        array[i] = umap[array[i]];
    }
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    convert(array, n);
    cout << "\n\nConverted array is \n";
    printArray(array, n);
    return 0;
}