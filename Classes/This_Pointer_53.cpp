#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A &setData(int a) // By declaring a member function with such syntax -->class name (&)sign and function declaration we can explicitly call other member function to return value
    // By using this pointer in a function we can have that variable returned.
    {
        this->a = a; // in a function its local variables are given precedence rather than the others.So it can't set value of a variable of its same name.
        // To resolve this ambiguity the keyword (this) is a pointer which points to the object is being created.
    }
    void getData(void)
    {
        cout << "The value of a is :" << a << endl;
    }
};

int main()
{
    A a;
    a.setData(8).getData();
    a.getData();
    return 0;
}