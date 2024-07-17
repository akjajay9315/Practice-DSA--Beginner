#include <iostream>

using namespace std;

int main(){
       int L,N;
       cin>>L>>N;
       int W[N],H[N];

       for( int i=0;i<N;i++){
        cin>>W[i]>>H[i];
       }
        for( int i=0;i<N;i++){
            if(W[i]<L || H[i]<L){
                cout<<"UPLOAD ANOTHER"<<endl;
            }if(W[i]>=L && H[i]>=L && W[i]==H[i]){
                cout<<"ACCEPTED"<<endl;
            }if(W[i]>=L && H[i]>=L && W[i]!=H[i]){
                cout<<"CROP IT"<<endl;
            }  
        }
       


        return 0;
    }
   

