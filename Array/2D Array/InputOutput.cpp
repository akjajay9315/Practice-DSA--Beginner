#include<iostream>
using namespace std;

int main(){
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    // Or

    // arr[3][3] = {1,2,3,4.....}
    // arr[3][4] = {{1,2,3,4},{2,3,4,5}.... }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}