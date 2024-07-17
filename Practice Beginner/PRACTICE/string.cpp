 #include<iostream>
#include<cstring>
using namespace std;

// void Draw(int i,int j){
    int main(){

//-------------------------------email-------------------------------------
        string email="akjajay9315@gmail.com";
        int i=(int)email.find('@');

        string uname=email.substr(0,i);

        cout<<"User name is "<<uname<<endl;

        












//----------------------------REVERSE THR WORD--------------------------------

        // string str="ajay";
        // string rev="";

        // int len=(int)str.length();
        // rev.resize(len);

        // for(int i=0,j=len-1;i<len;i++,j--){
        //         rev[i]=str[j];

        // }
        // rev[len]='\0';
        // cout<<rev<<endl;









        // ----------------------------------LENGTH-----------------------------------

        // string str="Genius";

        // string::iterator it;
        // int count = 0;
        // for(it=str.begin(); it!=str.end() ;it++){
        //     count++;
            
        // }cout<<"The length is "<<count;




        // string str="GENIUS";

        // int count = 0;

        // for(int i=0; str[i]!='\0';i++){
        //     count++    ;   
        // }
        // cout<<"The length is "<<count<<endl;












//--------------------------------------------TOKEN-------------------------------------------------------------

        // char s1[50]="x=1,y=3,z=5";

        // char *token=strtok(s1,"=,");

        // while(token!=NULL){
        //     cout<<token<<endl;
        //     token=strtok(NULL,"=,");

        // }
        

         // char s1[100]="atul ke 20;ajay ke 1;aseem ke 30";
        // char *token=strtok(s1,"ke;");

        // while(token!=NULL){
        //     cout<<token<<endl;
        //     token=strtok(NULL,"ke;");


        





        // char s1[50]="x=2;y=4;z=6";
        // char *token=strtok(s1,"=;");

        // while(token!=NULL){
        //     cout<<token<<endl;
        //     token=strtok(NULL,"=;");

        // }










//------------------------------------------------PRINT-------------------------------------------------------------

    //    string str="genius";

    //     for(int i=0 ; str[i]!='\0'; i++){
    //         cout<<str[i];
    //     }
    //      cout<<endl;






//------------------------------------------------------LOWER TO UPPEER CASE-------------------------------------------

        // string str="AAAjAy";
        // string::iterator it;


        // for(it=str.begin();it!=str.end();it++){
        //     if(97<*it && *it<122){
           
        //     *it=*it-32;
        // }else{
        //     *it=*it;
        // }
        //     cout<<*it;
        // }
       
        // cout<<endl;
    











       

//---------------------------------------Taking input----------------------------------------------------------
        // char s1[50];
        // char s2[100];
        
        // cout<<"Enter the first string ";
        // cin.getline(s1,50);

        // cout<<"Enter the second string ";
        // cin.getline(s2,50);

        // strncpy(s1,s2,4);
        // cout<<s1;



        return 0;


    }

   