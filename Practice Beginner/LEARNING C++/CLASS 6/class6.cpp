#include<iostream>
using namespace std;

int main(){
    float d=34.4f;
    long double e=34.4l;
    cout<<"The valus of d is "<<d<<endl<<"The value of e is "<<e;
    return 0;
}
// 34.4 by default is considered as double while 34.4f is considered as float.
//means if we have to send 34.4 in the form of float ,that we have to use it as 34.4f. 
//simply 34.4 is considered as double by default.
// and 34.4l for long double.(used in function overloading)(aage padhenge)
//also f and l can be used as capital also.