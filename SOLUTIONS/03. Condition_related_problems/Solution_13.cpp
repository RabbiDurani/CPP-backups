#include <iostream>
using namespace std;

int main()
{
    int choice,choice1;
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
        cin>>choice1;
        if(choice1==1)
        {
            cout<<"Quotient :"<<num1/num2;
        }
        else if(choice1==2)
        {
            cout<<"Reminder :"<<num1%num2;
        }
    }
    return 0;
}