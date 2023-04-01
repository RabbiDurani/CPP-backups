#include <iostream>
using namespace std;

class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 9, int c = 8) // if the user sets up the constructors by giving a default value for any parameter then when there's less parameter or parameters are passed then the default value is automatically sets value for that parameter.
    // otherwise if two or more parameters are passed then it sets those parameters as formal parameters.
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void PrintNumber(void)
    {
        cout << "The values are " << data1 << " , " << data2 << " & " << data3 << endl;
    }
};

int main()
{
    simple s1(1, 5, 10);
    simple s2(5, 7);
    simple s3(9);
    s1.PrintNumber();
    s2.PrintNumber();
    s3.PrintNumber();

    return 0;
}