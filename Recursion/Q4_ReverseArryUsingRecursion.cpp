
#include<iostream>

using namespace std;

void reverseArr(int arry[] , int start,int end){
    if(start >= end/2){
        return;
    }
    // cout<< arry[start] << " " << arry[end] << endl;
    int temp = arry[start]; 
    arry[start] = arry[end-1];
    arry[end-1] = temp;
    // cout<< arry[start] << " " << arry[end] << endl;

    reverseArr(arry, start+1, end-1);

    //   for(int i =0; i< end; i++){
    //     cout << arry[i] << " ";
    // }
    }


int main()
{

    int arr[7]  = {1,2,3,4,5,6,7};  
    int len = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,0, len);  
    for(int i =0; i< len; i++){
        cout << arr[i] << " ";
    }
    return 0;
}