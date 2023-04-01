#include <iostream>
using namespace std;
class employee
{
    // Classes --> is the extension of structure
    //  Class has two types of specifiers.>Private & public.
private: // The elements declared in private can only be accessed through functions being declared in the class.
         // The elements the programer doesn't want to give the access to others declares in the portion of private.
         //By default in class everything is private
    int a, b, c;

public:
    // The elements the programer doesn't bother about giving access to others declares in the portion of public.
    int d, e;
    void setData(int a1, int b1, int c1); // The functions can'be implemented in the class.or rather by only declaring the function prototype and do the implementation by declaring the function indivisually.
    void getData()                        // But it is compulsory to declare the function prototype in the class,otherwise it will not be possible to access the elements of private.
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
// To implement the declared prototype of the function that is declared in the class,There is need to declare the function like this in below >
// Return type > Name of class > scope resolution operator > Function name > Arguments
     void          employee             ::                     setData       (int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee rabbi;
    // rabbi.a=37; These direct declaration of elements of private will though errors,because of direct declaration out of the class.
    // rabbi.b=74; These direct declaration of elements of private will though errors,because of direct declaration out of the class.
    // rabbi.c=87; These direct declaration of elements of private will though errors,because of direct declaration out of the class.
    rabbi.d = 56; // Because of these elements d & e being declared in public,They can'be accessed from any where.Buy following the same method won't work at the case of private elements
    rabbi.e = 76;
    rabbi.setData(1, 2, 4); // Through this function we are being able for passing values for private elements.Because of the prototype of that function is being declared in the class.
    rabbi.getData();
    return 0;
}
