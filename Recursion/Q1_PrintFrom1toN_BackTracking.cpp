
#include <iostream>

using namespace std;

void f(int n, int t){
        if(n<t){
        return;
        }
        f(n, t+1);
        cout<< t << "a";
}

int main()
{
    cout<<"Enter number";
    int n;
    cin>> n;
    f(n, 1);
    return 0;
}
