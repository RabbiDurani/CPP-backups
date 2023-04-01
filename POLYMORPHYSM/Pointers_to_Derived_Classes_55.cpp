#include <iostream>
using namespace std;
//         -----> Run Time Polymorphism <-----
class BaseClass
{
public:
    int varBase;
    void Display(void)
    {
        cout << "Displaying base class variable :" << varBase << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int varDerived;
    void Display(void)
    {
        cout << "Displaying base class variable :" << varBase << endl;
        cout << "Displaying Derived class variable :" << varDerived << endl;
    }
};
int main()
{
    //      -----> Topic is late binding <-----
    BaseClass *base_class_Pointer; // This is a class pointer which points to the objects of the class.This will point to the objects will be created in by this class.
    BaseClass obj_baseClass;
    DerivedClass obj_derived;
    base_class_Pointer = &obj_derived; // Pointing base class pointer to derived class.Sample of base classes pointer can point to the derived classes objects.
    base_class_Pointer->varBase = 76;
    // base_class_Pointer->varDerived=76;This will throw error.
    base_class_Pointer->Display(); // In the term of implementing while the program will run then it won't call then member functions of the derived class.It will call the member function of the base class.
    base_class_Pointer->varBase = 3400;
    base_class_Pointer->Display();
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->varDerived = 67;
    derived_class_pointer->Display();
    return 0;
}
/*If the pointer is declared of base class and if it is pointing to derived class objects,then while program will run if the objects are of base class it will run the member functions of base class and access the variables of base class;and if tried to access the elements of derived class then it will throw error.
Because weather the pointer is set to point the derived class but it is of base class.
Through a pointer of base class it is inaccessible to access the member function or variable of a derived class weather it the pointer is pointed towards the object of the derived class.*/