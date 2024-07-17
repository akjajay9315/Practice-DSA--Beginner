#include<iostream>
using namespace std;

int main(){
    // int n,count=0;
    // char A[n];
    // cout<<"Enter your word :\n";
    // cin>>A;-------------------------------input don't works why???
    char A[]="Education";
    int count =0;

    for (int i = 0; A[i]!=0; i++)
    {
        if (A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'|| A[i]=='u'|| A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'|| A[i]=='U')
        {
            count++;
        }      
    }
    cout<<"The no. of Vovels in your word is : "<<count;
    return 0;
}
// similar question -to count the no. of words than count spacea and if
//  A[i-1]=' 'than word increase nahoi hoga.