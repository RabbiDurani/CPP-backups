#include <iostream>
using namespace std;

/*float Average(float a, float b)
{
    float avg = (a + b) / 2;
    return avg;
}*/
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    /*float a;
    a = Average(5, 4.0);
    cout << "The average of these numbers are :" << a << endl;*/
    int x = 5, y = 9;
    swapp(x, y);
    cout << x << endl
         << y;
    return 0;
}