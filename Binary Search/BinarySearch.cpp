// time complexity --- log n
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2 ;
// Note---Here mid should be equal to ------start + (end-start)/2 -----
// bcz the above used expression can be outside range ---as int => 2^31-1

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
        mid  = (start + end)/2;
    }  
    return -1;
}

int main(){

    int even[] = {2,7,9,12,15,18};
    int odd[] = {1,4,5,7,9,13,16,17,20};

    int index1 = binarySearch(even,6,15);
    int index2 = binarySearch(odd,9,17);

    cout<<"The index of 15 in even wala array is : "<<index1<<endl;
    cout<<"The index of 17 in odd wala array is : "<<index2<<endl;

    
    return 0;
}
