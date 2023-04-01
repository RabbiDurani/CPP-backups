#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;
    cin >> op;
    cin >> num1 >> num2;
    if (op == '+')
    {
        cout << "Addition :" << num1 + num2;
    }
    else if (op == '-')
    {
        cout << "Subtraction :" << num1 - num2;
    }
    else if (op == '*')
    {
        cout << "Multiplication :" << num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            cout << "Zero as divisor is not valid!";
        }
        else
        {
            cout << "Division :" << num1 / num2;
        }
    }
    return 0;
}