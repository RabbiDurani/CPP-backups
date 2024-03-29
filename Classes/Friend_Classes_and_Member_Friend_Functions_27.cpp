#include <iostream>
using namespace std;
// This is called forward declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);//Because of the access of the elements of the class being accessed which been declared below,so if it is tried to be implemented here it will show error,so we follow the method of declaring prototype in the class and implementing it below all the classes.
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // individually declaring functions as friends
    // friend int calculator ::sumRealComplex(complex, complex);
    // friend int calculator ::sumCompComplex(complex, complex);
    // Alternative way if theres so  many functions to make friend with other class -->is to make the whole class as friend.
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};
int calculator ::sumRealComplex(complex o1, complex o2)

{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)

{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(2, 4);
    o2.setNumber(4, 5);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 & o2 " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of Complex part of o1 & o2 " << resc << endl;
    return 0;
}
