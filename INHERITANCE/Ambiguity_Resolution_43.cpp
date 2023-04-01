#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you ?"<<endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "how were you ?"<<endl;
    }
};
class Derived : public base1, public base2
{
    int a;
    public:
    void greet()
    {
        base2::greet();
    }
};
class B
{
    int a;
    public:
    void say(void)
    {
        cout<<"Hello world";
    }
};
class D : public B
{
    public:
    /*void say (void)
    {
        cout<<"Hello my countrymen";
    }*/
};
int main()
{
    /*Ambiguity 1
    base1 obj1;
    base2 obj2;
    Derived obj3;
    obj1.greet();
    obj2.greet();
    obj3.greet();*/
    //Ambiguity 2
   D d1;
   d1.say();
    return 0;
}
/* How is ambiguity occurred ?
Ans:- When user creates functions with same name in mare than 1 or more (such as greet declared in class base1 & base2) classes also inherits those functions into a derived class causes ambiguity.
Thus it causes a confusion for the compiler as from which one to call the function,because both of them are of the same name.
Solution --->To resolve this ambiguity ,in the derived class user have to define that from which class the derived class shall use the function in a function which the user can call in the main function ,such as -->
name of the class   scope resolution operator   function name ;
 * If there's a class which is derived from the other class and both the base class and the the derived class having functions defined with same name then there compiler will automatically override the call for that function by calling the function defined in the derived class , otherwise it will execute the function from defined in inherited class*/