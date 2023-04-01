#include <iostream>
using namespace std;

int main()
{
    double a, b, x;
    cout << "Enter two numbers :";
    cin >> a >> b;
    x = (3.31 * (a * a) + 2.01 * (b * b * b)) / (7.16 * (b * b) + 2.01 * (a * a * a));
    cout << x;

    return 0;
}