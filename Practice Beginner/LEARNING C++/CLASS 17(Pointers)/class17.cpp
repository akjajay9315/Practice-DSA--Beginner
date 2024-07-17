#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}
// call by reference me main ke andar call me & ka use hota hai
// and function declaration me pointer ka 

// example --

// int main() {
// int x = 3, y = 5;
// _swap(&x, &y);
// printf("x = %d & y = %d\n", x, y);
// return 0;
// }

// /call by reference
// void _swap(int *a, int *b) {
// int t = a;
// *a = b;
// *b = t;
// }

// call by value
// void swap(int a, int b) {
// int t = a;
// a = b;
// b = t;
// printf("a = %d & b = %d\n", a, b);
// }

// array ke input output me ulta hota hai




// or

 