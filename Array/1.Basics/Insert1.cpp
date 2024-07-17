#include<iostream>
using namespace std;

int main(){
    int n=7;
    int A[n];
    cout<<"Enter the elements"<<endl;

    for (int i = 0; i < 7; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    // int j;

    for(int i=n;i>4;i--){
        A[i]=A[i-1];  /*left wale ki value rightb wali ho jayegi*/ 
    }
    A[4]=7;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

