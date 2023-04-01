#include <iostream>
using namespace std;

// In c++compiler automatically calls the functions based in numbers of arguments passed(even if the functions are using the same names)
int sum(int a, int b)
{
    cout << "\nUsing function with 2 arguments " << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "\nUsing function with 3 arguments " << endl;
    return a + b + c;
}

// functions for example of function overloading
//Mainly function overloading is-to declare & use functions of same name & using them passing different arguments.

// calculate the volume of a cylinder
float volume(double r, int h)
{
    return (3.14 * r * r * h);
}
// calculate the volume of a cube
int volume(int a)
{
    return (a * a * a);
}
// calculate the volume of a rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of 7 & 9 is=" << sum(7, 9) << endl;
    cout << "The sum of 7,9 & 12 is=" << sum(7, 9, 12) << endl;
    cout << "The volume of rectangle 3,7 & 6 is=" << volume(3, 7, 6) << endl;
    cout << "The volume of cube 3 is=" << volume(3) << endl;
    cout << "The volume of cylinder radius 3 & height 6 is=" << volume(3, 6) << endl;

    return 0;
}
