  // 2. Selection control structure: Switch Case statements
   #include<iostream>

using namespace std;

int main(){
    // cout<<"This is tutorial 9";
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;
    

    switch(age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
} 
    // Here if break comment out than all cases after that printed.
    
