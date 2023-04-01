#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) <= 80)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    if (!(a + b))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    if (c != 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}