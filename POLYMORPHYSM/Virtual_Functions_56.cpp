#include <iostream>
using namespace std;
//            ---->Run Time Polymorphism <----
class BaseClass
{
public:
    int varBase = 1;
    virtual void Display(void) // The declaration of making a function virtual offers to override default method of working of function.
    {
        cout << "1 Displaying base class variable :" << varBase << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int varDerived = 2;
    void Display(void)
    {
        cout << "2 Displaying base class variable :" << varBase << endl;
        cout << "2 Displaying Derived class variable :" << varDerived << endl;
    }
};
int main()
{
    BaseClass *base_class_Pointer;
    BaseClass obj_baseClass;
    DerivedClass obj_derived;
    base_class_Pointer = &obj_derived;
    base_class_Pointer->Display();
    return 0;
}
/*The default method of pointer to call a member function is to call the mentioned member function of the base class unless it is declared virtual.If declared  virtual it offers overriding.
The declaration of virtual makes the pointer of the base class which is pointing towards the Derived class override the method of default method of accessing the pointer
It makes the pointer to point the object of the function of which is set for the object (in this function its set for derived class) instead of its default method of pointing towards the class from which it was created from
So actually the thing is the declaration (virtual) decides with which function shall the call bind with or shall be called.*/
//         ----> Rules for Virtual Functions <----
/*1.They can't be static
2.They are accessed by object pointers.
3.Virtual functions can'be a friend of another class.
4.Virtual functions may not be used in the base class.
5.If a virtual function is defined in the base class,theres no need to redefine it in the derived class.
*/