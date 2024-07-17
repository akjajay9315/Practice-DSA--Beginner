// reverse word of string ------ do question in coding ninja0-----love babbar hint



#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int start=0;
    int end=n-1;

    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int length(char name[]){
    int count=0;
    for (int i = 0; name[i]!=0; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Enter the string to be reversed : ";
    cin>>name;
    
    int len=length(name);
    reverse(name,len);
    cout<<"The reversed string is : ";
    cout<<name;
    
    return 0;
}