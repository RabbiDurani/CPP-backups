#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inPid)
    {
        id = inPid;
        salary = 46.84;
    }
    Employee(){};
};
// Syntax of Derived class
/*Class {{Name-of-Derived class}}:{{Visibility-mode}} {{Name-of-Base-class}}
{
    class members/methods/etc.
}*/
// Creating a programmer class derived from employee base class.
class Programmer :public  Employee
{
public:
  int languageCode = 9;
    Programmer(int inPid)
    {
        id = inPid;
        languageCode = 9;
    }
    void getData(void)
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee rabbi(1), ri(2);
    cout << rabbi.salary << endl;
    cout << ri.salary << endl;
    Programmer skill(1);
    cout<<skill.languageCode<<endl;
    skill.getData();
    cout<<skill.id<<endl;

    return 0;
}
//     Visibility Mode
// Mainly it means how are you inheriting a class elements.Such if the user inherits the publicly then the elements of the base class will be inherited publicly in the inherited class.
// But if the user inherits privately then the private elements of the base class will be inherited privately in the inherited class.
// If visibility mode is  not declared then the default visibility mode is Private.
// Private elements of the base class are not inheritable by the inherited class.Means private members are never inherited.