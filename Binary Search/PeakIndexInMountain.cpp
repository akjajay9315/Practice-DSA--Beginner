#include <iostream>
using namespace std;
int peakIndexInMountainArray(int A[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (A[mid] < A[mid + 1])
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
int main()
{
    int A[] = {2, 4, 7, 9, 10, 15, 12, 8};
    cout << "The index of peak of the mountain is : " << peakIndexInMountainArray(A, 8);
    return 0;
}