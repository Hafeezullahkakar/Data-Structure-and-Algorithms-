
#include <iostream>

using namespace std;

int fibonaci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int n1 = fibonaci(n - 1);
    int n2 = fibonaci(n - 2);
    return n1 + n2;
}

int main()
{
    int n = 8;
    int f = fibonaci(n);
    cout << f << endl;
    return 0;
}