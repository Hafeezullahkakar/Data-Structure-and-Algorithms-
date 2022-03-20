#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
            preopen("input.txt", "r", stdin)
            preopen("output.txt", "w", stdout)
    #endif

    int a, b;
    cin>>a;
    cin>>b;
    cout<< a+b <<"\n";

    return 0;
}