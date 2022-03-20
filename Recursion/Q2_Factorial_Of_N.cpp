
#include <iostream>
#include<string>

using namespace std;

int factorial(int d){   
     if(d==1){
         return 1;
     }
     return d * factorial(d-1);

}



int main(){
     int n;
     cout<<"Enter number:  ";
     cin>> n;
     cout<< factorial(n);

    
    return 0;
}






