#include <iostream>
using namespace std;

class number
{
private:
    int a;

public:
    number()
    {
        a = 100;
    }
    number(int num)
    {
        a = num;
    }
    number(number &obj) // This is a copy constructor.Which resembles as an object and takes input the address of an object and executes the passed arguments.
    // When no copy constructor is found,compiler sets its own copy constructor.
    {
        cout << "Copy constructor is called !!! " << endl;
        a = obj.a;
    }
    void Display()
    {
        cout << "The number of this object is :" << a << endl;
    }
};

int main()
{
    number x, y, z(56), z2; // for these pre-declared objects compiler automatically sets values with its default constructors.But only the user can change their values by initializing them.
    // Otherwise of they are called they will consist the value initialized by the default constructor.
    x.Display();
    z.Display();
    y.Display();
    number z1(x); // IN this call copy constructor will invoke.Because if an object is just created and initialized with the value of the pre-declared object only then copy constructor will invoke.
    z1.Display();
    z2 = z;
    z2.Display(); // copy constructor will not invoke,because the object is already been declared above.
    number z3 = z;
    z3.Display(); // Here copy constructor will invoke because is not declared above.
    return 0;
}