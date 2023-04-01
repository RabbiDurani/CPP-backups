#include <iostream>
using namespace std;
/*   ---> Syntax for initialization list in Constructor
constructor(argument - list) : Initialization list
{
    assignments+other codes;
}
Example
class test{
int a,b;
public :
test(int i,int j):a(i),b(j){constructor body}
};
*/
class test
{
    int a, b;

public:
    // test(int i,int j):a(i),b(j)
    // test(int i, int j) : b(j), a(i*b):this will give garbage value because the variable which is declared before will be initialized before.To avoid this error assume if we declare b before instead of a then it won't throw error.
    test(int i, int j) : a(i), b(a * j) // if in the syntax for initialization a value is available as set to be used then it can be used to set the value of the next variables.
    // Such as for this syntax value for a is being set before now it offers to set other variable values to set their values(also respectively) for b.
    {
        cout << "Constructor executed" << endl;
        cout << "value of a is :" << a << " value of b is :" << b << endl;
    }
};
int main()
{
    test t1(3, 4);
    return 0;
}