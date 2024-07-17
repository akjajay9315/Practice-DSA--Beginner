#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end){

        if (arr[mid] == key){
            return mid;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = (start + end )/2;
    }
    return -1;
}

int main(){

    int even[] = {2,4,7,10,14,30,32,44};
    int odd[] = {1,6,7,10,14,15,21};

    int index1 = binarySearch(even, 8, 32);
    int index2 = binarySearch(odd, 7, 7);

    cout << "The index of 32 in even wala array is : "<< index1 << endl;
    cout << "The index of 7 in odd wala array is : "<< index2 << endl;
    
    return 0;
}