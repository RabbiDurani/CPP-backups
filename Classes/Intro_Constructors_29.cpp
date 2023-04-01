#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Creating a constructor--->
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.
    complex(void); // Constructor declaration.
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};
complex ::complex(void) // Once a constructor is initialized with values it can'be invoked by any call by main function.
// The constructor which doesn't accepts any parameters is a default constructor.
{
    a = 1;
    b = 3;
    cout << "Hello World !" << endl;
}

int main()
{
    complex c, c1, c2;
    c.printNumber();
    c1.printNumber();
    c2.printNumber();

    return 0;
}
// Characteristics of constructors
// 1.It should'be declared in the public section of the class.
// 2.They are automatically invoked whenever the object is created.
// 3.Whatever is written in the constructor it is executed.
// 4.They can't return values & don't have return type.
// 5.It can have default arguments.
// 6.We can't refer to their address.
