#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) <= 80 && (c >= 0))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    if ((a - b) == 0 || c != 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    if (a != b || !(b < c) && c > 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    if ((a != b || !(b < c)) && c > 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}