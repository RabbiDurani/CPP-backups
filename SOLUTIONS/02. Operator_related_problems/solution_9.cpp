#include <iostream>
using namespace std;
int main()
{
    int a, b, c, x, y, z;
    cin>>a>>b>>c;
    x = a - b / 3 + c * 2 - 1;
    y = a - (b / (3 + c) * 2) - 1;
    z = a - ((b / 3) + c * 2) - 1;
    cout << x << endl
         << y << endl
         << z << endl;
    return 0;
}