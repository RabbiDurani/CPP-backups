#include <iostream>
using namespace std;

int main()
{
    // what is pointer --->data type that holds the address of other data types
    int a = 45;
    int *b = &a;
    // &--->address of operator
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;
    // *--->(value at)dereference operator
    cout << "The value at address b is: " << *b << endl;
    // **--->pointer to pointer operator--->which holds the value of a pointer in a pointer variable
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c) "<<**c<<endl;

    return 0;
}
