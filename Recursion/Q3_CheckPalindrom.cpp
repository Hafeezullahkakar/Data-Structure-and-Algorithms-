#include <iostream>
#include <string>
using namespace std;

bool palindrom(string s, int start, int end)
{
    cout<< start << " " << end << endl;
    if (start >= end / 2)
    {
        return true;
    }
    else if (s[start] != s[end])
    {
        return false;
    }
    palindrom(s, start + 1, end - 1);
    return true;
}

int main()
{
    string s = "camadamai";
    bool answer = palindrom(s, 0, s.length() - 1);
    cout << answer  <<"is answer" << endl;
    return 0;
}