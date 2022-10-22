/*
Given an array of jobs where every job has a deadline and associated profit if the job is finished before the deadline. It is also given that every job takes a single unit of time, so the minimum possible deadline for any job is 1. Maximize the total profit if only one job can be scheduled at a time.

Approach
Greedy:
Greedily choose the jobs with maximum profit first, by sorting the jobs in decreasing order of their profit. This would help to maximize the total profit as choosing the job with maximum profit for every time slot will eventually maximize the total profit
*/

#include <bits/stdc++.h>
using namespace std;

// structure to represent a job
struct Job
{
    int id;
    int deadline;
    int profit;
};

// compartor function for sorting jobs
bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}

void printJobsScheduling(Job arr[], int n)
{
    // sort job in decreasing order of profit
    sort(arr, arr + n, comparison);
    int result[n]; // storing the results(sequnce of jobs)
    bool slot[n];  // to keep track of free time slots

    // initialize all slots to be free
    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }

    // iterate through all jobs
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--)
        {
            // Free slot found
            if (slot[j] == false)
            {
                result[j] = i;  // Add this job to result
                slot[j] = true; // Make this slot occupied
                break;
            }
        }
    }

    // Print the result
    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
}

int main()
{
    Job arr[] = {{'a', 2, 100},
                 {'b', 1, 19},
                 {'c', 2, 27},
                 {'d', 1, 25},
                 {'e', 3, 15}};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs "
            "\n";

    // Function call
    printJobsScheduling(arr, n);
    return 0;
}