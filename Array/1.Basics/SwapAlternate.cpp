#include<iostream>
using namespace std;

void SwapAlternate(int A[],int n){
    for (int i = 0; i < n; i=i+2)
    {
        if( i+1 < n){
            swap(A[i],A[i+1]); 
            
            // or 

            // temp=A[i+1];
            // A[i+1]=A[i];
            // A[i]=temp;
        }
    }
    
}
int main(){
    int n;
    int A[100];
    cout<<"Enter the size of the array : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
    cout<<"The array is :";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    SwapAlternate(A,n);

    cout<<"The swapped array is :";

    for (int i = 0; i < n; i++)
    {
        cout << A[i]<<" ";
    }

    return 0;
}