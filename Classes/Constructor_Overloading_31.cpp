#include <iostream>
using namespace std;
// if theres too many constructors are used in a class it is called constructor overloading
class complex
{
    int a, b;

public:
    // if a class consists multiple constructors then it will be executed based on the number of parameters passed and number of parameters declared for the function
    complex()
    {
        a = 8;
        b = 3;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x) // A class can consist multiple constructors.
    {
        a = x;
        b = 0; // if a single parameter is passed,Then the user can set the value of the other variable as he wants.
    }
    void PrintNumber(void)
    {
        cout << "The point is " << a << " , " << b << endl;
    }
};

int main()
{
    complex c1(5);
    c1.PrintNumber();
    complex c2(7, 9);
    c2.PrintNumber();
    complex c3;
    c3.PrintNumber();
     return 0;
}
