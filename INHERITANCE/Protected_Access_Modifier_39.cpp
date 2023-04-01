#include <iostream>
using namespace std;

class Base
{
protected: //'Protected' is a key word that declares its elements as protected(quite the same as private),meaning elements inside protected are can'be inherited,But the can't be accessed as public.
    int a;

private:
public:
};
/*How derivation works in different ways of derivational member :
                          Public Derivation        private Derivation        Protected Derivation
  1.Private Members         Not Inherited            Not Inherited             Not Inherited
  2.protected Members         Protected                Private                   Protected
  3.public Members             Public                  Private                   Protected
  */
class Derived :protected Base
{
};

int main()
{
    Base b;
    Derived d;
   // cout<<d.a;  Will not work.Since 'a' is protected in both Base as well as Derived class.
    return 0;
}