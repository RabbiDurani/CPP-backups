#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class rabbi
{
public:
    T1 a;
    T2 b;
    T3 c;
    rabbi(T1 x, T2 y, T3 ch)
    {
        a = x;
        b = y;
        c = ch;
    }
    void Display(void)
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
        cout << "The value of c is :" << c << endl;
    }
};
int main()
{
    rabbi<> r(4, 7.99,'R');
    r.Display();
    cout<<endl;
    rabbi<float,char,char>R(9.12,'R','A');
    R.Display();
    return 0;
}