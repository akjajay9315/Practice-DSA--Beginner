#include<iostream>
using namespace std;

void reverse(int A[],int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(A[start],A[end]);
        start++;
        end--;

    }
}

int main(){
    int A[]={1,2,3,4,5,6,7,8};
    reverse(A,8);

    for (int i = 0; i < 8; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}