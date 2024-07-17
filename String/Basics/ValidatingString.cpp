#include<iostream>
using namespace std;
int valid(char *A){
    for (int i = 0;A[i]!=0; i++)
    {
        if (!(A[i]>='a'&& A[i]<='z'&& A[i]>='A'&& A[i]<='Z' && A[i]>='0' && A[i]<='9'))
        {
           return 0;
    }else
    { 
        return 1;
    }
}

}

int main(){
    char *A ="Aajay$1234";
    if (valid){
        cout<<"The string is valid.";
    }else{
        cout<<"The string is Invalid";
        };


}
    