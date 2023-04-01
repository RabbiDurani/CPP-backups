#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    // By default in class everything is private,unless public is declared below.
    string s;
    void chk_bin(void); // By declaring this function in private it has became unable for other users to see or access thouse variable in private
    // What ever is declared above is considered as private.even if private is not written above those syntaxes.
public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void) // Function to get input
{
    cout << "Enter a binary number :";
    cin >> s;
}
void binary ::chk_bin(void) // Function to check if the number of string is binary or not
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void) // Function to replace '0's with '1's & '1's with '0'.
{
    chk_bin(); // while declaring prototype a function with in a function and both are member of the same class is clled nesting of member function

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void) // Function to
{
    cout << "\nDisplaying your binary number :" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    /*OOps - classes &objects
    c++ was initially called-- > c with classes by stroustroup
    Classes-- > is the extension of structure
    Structure had limitations >
        --->members are public
        ---> no methods
    Classes--->Struture +more
    Classes have methods &properties
    Classes can make few members as public &also as private
    Structures in C++ are typedef
    It is possible to declare objects along with the class declaration
    class employee
    {
        // class defination
        // rabbi,shakil,riad;
    };
    Nesting of member function. */

    binary b;
    b.read();
    // b.chk_bin(); by declaring it in private class it has also became unaccessable for main function too
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
