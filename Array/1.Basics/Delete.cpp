#include<iostream>
using namespace std;

int main(){
    int n=5;
    int A[n];
    cout<<"Enter the array elements:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>A[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
          cout<<A[i]<<" ";
    }

    n--;
    int j=3;
    for(int i=j;i<n;i++){
        A[i]=A[i+1];
    }
    cout<<endl;


    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}