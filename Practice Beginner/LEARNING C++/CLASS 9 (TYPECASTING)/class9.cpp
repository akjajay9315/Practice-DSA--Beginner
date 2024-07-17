//***************************Typecasting*******************************

//used to convert float,int,double,etc into each other.
#include<iostream>
using namespace std;
int main(){
    float a=60.45;
    cout<<"The value of a is "<<(int)a<<endl;
    cout<<"The value of a is "<<int(a)<<endl;
    int c=int(a);
    cout<<"The exprssion is "<<c+c; 
    return 0;
}
//now further in function body if we use --->
//int c = int(b); than it is valid now.