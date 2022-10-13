// Write a program to reverse an array or string

/*
Iterative way : time complexity is O(n)
1) Initialize start and end indexes as start = 0, end = n-1 
2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
start = start +1, end = end – 1 
*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    for (int i= 0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Original Array : ";
    printArray(arr, n);
    cout<<endl;
    cout<<"reverseArray :";
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
    cout<<  endl;  
}

/*
Recursive Way: Time complexity o(n)
1) Initialize start and end indexes as start = 0, end = n-1 
2) Swap arr[start] with arr[end] 
3) Recursively call reverse for rest of the array.
*/

#include <bits/stdc++.h>
using namespace std;
void reversedArray(int arr[], int start, int end){
    if (start >=end)
    return;

    swap(arr[start], arr[end]);
    // recursive function calling
    reversedArray(arr, start+1, end-1);

}
