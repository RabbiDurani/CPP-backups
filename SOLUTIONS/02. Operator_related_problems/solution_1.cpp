#include <iostream>
using namespace std;

int main()
{
    float a, b;
    float ad, s, m, q, r;
    cout << "Enter a & b :" << endl;
    cin >> a >> b;
    ad = a + b;
    cout << "Addition :" << ad << endl;
    s = a - b;
    cout << "Subtraction :" << s << endl;
    m = a * b;
    cout << "Multiplication :" << m << endl;
    q = a / b;
    cout << "Quotient :" << q << endl;
    r = a % b;
    cout << "Reminder :" << r << endl;
    return 0;
}