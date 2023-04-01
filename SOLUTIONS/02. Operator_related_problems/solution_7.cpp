#include <iostream>
using namespace std;

int main()
{
    double x = -150, y = 123.125;
    cout << "Assignment :" << y << " assigned to an int produces :" << (int)y << endl;
    cout << "Assignment :" << x << " assigned to an int produces :" << x << endl;
    cout << "Type casting (float) -150 produces :" << (float)x << endl;
    cout << "Type casting (int) 123.125 produces :" << (int)y << endl;
    return 0;
}