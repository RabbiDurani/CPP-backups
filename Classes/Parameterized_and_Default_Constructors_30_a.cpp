#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};
complex ::complex(int x, int y) // The Constructor which accepts parameters set by user is called Parameterized constructor.
{
    a = x;
    b = y;
    // cout << "Hello World !" << endl;
}

int main()
{
    complex a(5, 6); // This process is called Implicit call.
    a.printNumber();
    complex b = complex(8, 12); // This process is called Explicit call.
    b.printNumber();

    return 0;
}