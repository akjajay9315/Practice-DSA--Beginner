// stable or unstable algo-----google
// in- place sort kya hota hai-----google
// in this sort ith round me ith largest element apne jagah pe aa jaata hai 

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for( int i = 1; i < n; i++){

        bool swapped = false;

        for(int j = 0; j < n-i; j++){
            
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
           
            } if (swapped == false){
                break;
        }
    }
}
