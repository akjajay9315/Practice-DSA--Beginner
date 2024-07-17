#include<iostream>
using namespace std;

int getMin(int A[],int n){
    int min=INT8_MAX;

    for (int i = 0; i < n; i++){
        if(A[i]<min){
            min=A[i];
        }
        // iske jagah pe mini=min(min,A[]); bhi use kar sakte.
    } 
    return min;
    
}

int getMax(int A[],int n){
    int max=INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
    
}

int main(){
    
    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;

    int A[100];
    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
    }

    cout <<"The max value in the array is : "<<getMax(A,size)<<endl;
    cout << "The min value in the array is : " << getMin(A, size) << endl;

    return 0;
}