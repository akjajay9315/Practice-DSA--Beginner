// Doubt in the solution.....To Do after learning ------Prefix Sum method

#include<iostream>
using namespace std;

int getpivot(int A[],int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start < end){

        if(A[mid] >= A[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + ( end -  start )/2;
    }
    return start; 
}

int main(){

    int A[] = {3, 5, 9, 20, 31, 25, 21, 19,};
    int peak = getpivot(A, 6);

    cout << " The peak index of the mountain in the array is : "<< peak;    
    return 0;
}