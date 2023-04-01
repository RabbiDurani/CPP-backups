#include <iostream>
using namespace std;
/*
     Case 1:
class B : public A
{
   If both the classes having constructors then the order of execution is like -->first A then B.
}
     Case 2:
class A : public B,public C
{
  for this formation order of execution is like the class is derived first its constructor will'be executed first and respectively.
  such as ----> first B --> then C ---> then A.
}
    Case 3:
class A : public B,virtual public C
{
  In this case the virtual base class will'be given priority.if theres one or more base classes are derived as virtual then constructor of that/those class will be executed first.
  such as  ---->first C ---> then B ---->then A.
}
*/
class Base1
{
  int data1;

public:
  Base1(int i)
  {
    data1 = i;
    cout << "Base 1 class constructor was called" << endl;
  }
  void printData1(void)
  {
    cout << "The value of data1 is :" << data1 << endl;
  }
};
class Base2
{
  int data2;

public:
  Base2(int i)
  {
    data2 = i;
    cout << "Base 2 class constructor was called" << endl;
  }
  void printData2(void)
  {
    cout << "The value of data2 is :" << data2 << endl;
  }
};
class Derived : public Base1, public Base2
{
  int derived1, derived2;

public:
  Derived(int b1, int b2, int d1, int d2) : Base1(b1), Base2(b2)
  {
    derived1 = d1;
    derived2 = d2;
    cout << "Derived class constructor was called" << endl;
  }
  void printDerived(void)
  {
    cout << "The value of derived 1 is :" << derived1 << endl;
    cout << "The value of derived 2 is :" << derived2 << endl;
  }
};
int main()
{
  Derived rabbi(1, 2, 3, 4);
  rabbi.printData1();
  rabbi.printData2();
  rabbi.printDerived();
  return 0;
}

/*                                ----> Constructors in Derived Classes <----
    1.We can use constructors in derived class.
    2.If the base class doesn't contain any arguments then there's no need for constructors in the derived class.
    3.But if there is one or more arguments in the base class constructor then the derived class need to pass the same amount of arguments to the base class constructor.
    4.If both base & derived both the classes having the constructors then the base class constructor is executed first.Weather if having arguments or not

                                 ----> Constructors in Multiple Inheritance <----
    1.In multiple inheritance base  classes are constructed in the order they are declared in the class direction,such --->
     class c:public A,public B.In this scope of order the base class A will be constructed first then it will construct the others respectively.
     class c:public B,public A.In this scope of order the base class B will be constructed first then it will construct the others respectively.
    2.In multilevel inheritance the constructors are executed in the order of inheritance (It works as kind of a lift).
                                 ---->Special syntax <----
    1.Special syntax supports passing arguments to multiple base classes.
    2.The constructor of the derived class first receives all the arguments and passes them to the base classes.such if assume that theres a multilevel constructor is executing (for a multilevel inheritance)as (A->B->c).
      in this form of inheritance lets assume that all the constructors having 2 arguments at each (A-->a1,a2/B-->b1,b2/C-->c1,c2).In this form the derived class will take six arguments(assuming 7,9,3,1,5,4).
      then it will pass them as the order they been declared (for class A-->a1=7,a2=9 --> then class B--> b1=3,b2=1 --> then class C --> c1=5,c2=4).
    3.The body is called after finishing executing all the constructors.
                               ----> Special case of virtual base class <----
    1.The virtual base class takes priority/invokes before a non virtual base class.Meaning its their constructors are executed before an non virtual base class.its also is treated as kind of vip.
    2.If theres multiple virtual base classes then they are executed as the order they are declared.
    3.When all the virtual base classes are finished executing then the non virtual base classes starts to execute.

    */