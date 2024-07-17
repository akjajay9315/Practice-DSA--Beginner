//*****************************Manipulators***********************************
//example--->endl , setw, etc.
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=2,b=34,c=245344;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a with setw is: "<<setw(6)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(6)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(6)<<c<<endl;
    return 0;
}