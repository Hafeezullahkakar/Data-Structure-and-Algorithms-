#include <bits/stdc++.h>

using namespace std;

//find minimum and swap it 
void selectionSort(int arr[], int n){
      for(int i=0; i<n-2; i++){
        int mdx = i;
        for(int j =i; j<n-1; j++){
            if(arr[j]<arr[mdx]){
                mdx = j;
            }
        }
        int temp = arr[mdx];
        arr[mdx] = arr[i];
        arr[i] = temp;
    }
    for(int i =0; i<n; i++){
        cout<< arr[i] << " " ;
    }

}

//push max to the last by swaping adjusents
void bubbleSort(int arr[], int n){
     for(int i=n-1; i>=0; i--){        
        for(int j =0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                  int temp = arr[j+1];
                  arr[j+1] = arr[j];
                  arr[j] = temp;
             }
        }
      
    }
    for(int i =0; i<n; i++){
        cout<< arr[i] << " " ;
    }

}


//take the element and place it at it's correct position
void insertionSort(int a[], int n){
      for(int i=0; i< n; i++){
        int j= i;
        
        while(j>0 && a[j-1]>a[j]){
            int tmp = a[j-1];
            a[j-1] = a[j];
            a[j] = tmp;
            
            j--;
        }
        
    }
    for(int j =0; j<n; j++) cout<<a[j] <<" " ;
}

int main()
{
    int n = 9;
    int a[n] = {4,15,3,7,6,2,6,1,0}; 

  
    
    return 0;
}
