#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibo(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    int a, f;
    cout << "Enter value for f :" << endl;
    cin >> f;
    cout << "The factorial of " << f << " is " << factorial(f) << endl;
    cout << "Enter value for a :" << endl;
    cin >> a;
    // cout << "The factorial of " << a << " is " << factorial(a) << endl;
    cout << "The term at fibonacci sequence at position " << a << " is " << fibo(a) << endl;
    return 0;
}

