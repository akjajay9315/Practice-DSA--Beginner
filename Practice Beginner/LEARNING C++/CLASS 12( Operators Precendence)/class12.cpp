//********************Operators Precedence*************************

//Best site is ---->> en.cppreference.com <<---- for reference.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);//for brackets use precedences and associativity, from the references.
    cout<<c;
    return 0;
}

 