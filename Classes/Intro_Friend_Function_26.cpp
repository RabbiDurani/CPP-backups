#include <iostream>
using namespace std;
/*Method of complex number sum -->
  1 + 4i  --> complex numbers are consisted of 2 dimentions.
  2 + 5i  -->
  3 + 6i  --> When they are added they need 4 numbers to add up with first index of the first number with the first index of the second number.
                                                               also second index of the first number with the second index of the second number*/
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2); // By declaring a methods prototype inside the class as friend which is implemented outside the class will 
    //give permission to access the private elements of the class.
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(2, 5);
    c2.printNumber();
    sum = sumcomplex(c1, c2);
    sum.printNumber();
    return 0;
}
// Properties of friend function  ---->
// Since it is not in the scope of the class, so it can't  access the object of that class.such ---> c1.sumcomplex() == invalied.
// Dosen't any help of object to invoke.
// Usually contains objects as arguments.
// Its prototype can be decalred in public or private also.
// It can't access any members directly by their names but need object_name.member _name to access any members.
