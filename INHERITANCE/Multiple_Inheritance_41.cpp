#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int b1)
    {
        base1int = b1;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b2)
    {
        base2int = b2;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int b3)
    {
        base3int = b3;
    }
};
class Derived : public Base1, public Base2, public Base3
{
public:
    void show(void)
    {
        cout << "The value of Base 1 is :" << base1int << endl;
        cout << "The value of Base 2 is :" << base2int << endl;
        cout << "The value of Base 3 is :" << base3int << endl;
        cout << "The sum of Base1 & Base2 is :" << base1int + base2int + base3int << endl;
    }
};
/*The inherited Derived class will look something like this:
Data Members :
        base1int--->Protected.
        base2int--->Protected.
        base3int--->Protected.
Member Functions :
        set_base1int()--->Public.
        set_base2int()--->Public.
        set_base3int()--->Public.
        show()----------->public.

*/
int main()
{
    Derived d1;
    d1.set_base1int(5);
    d1.set_base2int(9);
    d1.set_base3int(12);
    d1.show();

    return 0;
}
/*Multiple Inheritance syntax
Name of Derived class :visibility-mode Name of base class 1,visibility-mode Name of base class 2
{
    Body of Derived class.
}
*/