#include <iostream>
using namespace std;

int main()
{
    int a, b, c, r;
    cin >> a >> b >> c;
    r = a + b + c;
    if (a > 0 && b > 0 && c > 0 && r == 180)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}