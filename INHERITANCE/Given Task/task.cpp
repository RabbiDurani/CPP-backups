#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class SimpleCalculator
{
protected:
    float f, s, p, r;
    char op;
    string st;

public:
    float Display_SimpleCalculator()
    {
        cout << "This is Simple Calculator :" << endl;
        cout << "Enter first number :";
        cin >> f;
        cout << "Enter Operator :(Such as + , - , * , / ) : ";
        cin >> op;
        cout << "Enter second number :";
        cin >> s;

        if (op == '+')
        {
            float r = f + s;
            cout << "The Result is :" << r << endl;
        }
        else if (op == '-')
        {
            float r = f - s;
            cout << "The Result is :" << r << endl;
        }
        else if (op == '*')
        {
            float r = f - s;
            cout << "The Result is :" << r << endl;
        }
        else if (op == '/')
        {
            float r = f - s;
            cout << "The Result is :" << r << endl;
        }
    }
};
class ScientificCalculator
{
protected:
    float f, p, r;
    string st;

public:
    float Display_ScientificCalculator()
    {
        cout << "This is Scientific Calculator " << endl;
        cout << "Enter Operator : (Such as : power & root & log & exp) :";
        cin >> st;
        if (st == "power")
        {
            cout << "Enter number to calculate Square of :";
            cin >> f;
            cout << "Enter power :";
            cin >> p;
            r = pow(f, p);
            cout << "The result is : " << r << endl;
        }

        else if (st == "root")
        {
            cout << "Enter number to calculate root of :";
            cin >> f;
            r = sqrt(f);
            cout << "The result is : " << r << endl;
        }
        else if (st == "log")
        {
            cout << "Enter number to calculate log of :";
            cin >> f;
            r = log(f);
            cout << "The result is : " << r << endl;
        }
        else if (st == "exp")
        {
            cout << "Enter number to calculate exp of :";
            cin >> f;
            r = exp(f);
            cout << "The result is : " << r << endl;
        }
    }
};
class Hybrid : public SimpleCalculator, public ScientificCalculator
{
public:
    void show(void)
    {
        cout << "Using Hybrid Calculator :" << endl;
    }
};
int main()
{

    Hybrid c1;
    c1.show();
    c1.Display_ScientificCalculator();
    c1.Display_SimpleCalculator();

    return 0;
}