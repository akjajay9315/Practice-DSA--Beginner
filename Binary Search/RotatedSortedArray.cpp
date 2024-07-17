// code is not right but see logic
// v. v imp question -----love babbar-----refer once

#include<iostream>
using namespace std;
int getpivot(int A[], int size)
{
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (A[mid] >= A[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int A[], int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (A[mid] == key)
        {
            return mid;
        }
        else if (key < A[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int search(int A, int n, int k)
{
    int pivot = getpivot(A, n);

    

    if (k >= A[pivot] && k <= A[n - 1])
    {
        // BSI on first line
        return binarySearch(A, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(A, 0, pivot - 1, k);
    }
}

// Striver solution---------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // if mid points the target
        if (arr[mid] == k)
            return mid;

        // if left part is sorted:
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                // element exists:
                high = mid - 1;
            }
            else
            {
                // element does not exist:
                low = mid + 1;
            }
        }
        else
        { // if right part is sorted:
            if (arr[mid] <= k && k <= arr[high])
            {
                // element exists:
                low = mid + 1;
            }
            else
            {
                // element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}
