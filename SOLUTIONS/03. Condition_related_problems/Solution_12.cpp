#include <iostream>
using namespace std;

int main()
{
    int choice;
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Enter choice(between (1-4) :";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Addition :" << num1 + num2;
    }
    else if (choice == 2)
    {
        cout << "Subtraction :" << num1 - num2;
    }
    else if (choice == 3)
    {
        cout << "Multiplication :" << num1 * num2;
    }
    else if (choice == 4)
    {
        cout << "Quotient :" << num1 % num2;
    }
    return 0;
}