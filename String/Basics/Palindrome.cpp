#include<iostream>
using namespace std;
//----------------------------------Do valid plindrome question------------------------------------------
char tolowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool CheckPalindrome(char A[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(tolowercase(A[s])!=tolowercase(A[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

int length(char A[]){
    int count = 0;
    for (int i = 0;A[i]!=0; i++)
    {
        count++;
    }
    return count;
}
int main(){
     char A[100];
     cout<<"Enter your string to check Palindrome :"<<endl;
     cin>>A;
     int len=length(A);
     int Palindrome=CheckPalindrome(A,len);

     if(Palindrome){
        cout<<"The given string is palindrome";
     }else{
        cout << "The given string is not palindrome";
     }  
     
    return 0;
}