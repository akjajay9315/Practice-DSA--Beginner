#include<iostream>
using namespace std;

int leftOccurrance( int A[], int size, int key ){
    int start = 0;
    int  end = size - 1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(A[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key < A[mid]){
            end = mid - 1;
        }
        else{
            start = mid +  1;
        }
        mid =  start + (end - start)/2;
        
    }
    return ans;
}

int rightOccurrance(int A[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (A[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < A[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int A[] = {1,2,3,3,3,3,5,7,9};
    int leftindex  = leftOccurrance(A, 9, 3);
    int rightindex = rightOccurrance(A, 9, 3);

    cout << "The left most index in array 3 is : " << leftindex<<endl;
    cout << "The right most index in array 3 is : " << rightindex;
    return 0;
}
// Also if we want to count 3 (here)than just use count = leftOccurrance - rightOccurrance;

// second approach ----------------------------------

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                startingPosition = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] == target)
            {
                endingPosition = i;
                break;
            }
        }
        return {startingPosition, endingPosition};
    }
};