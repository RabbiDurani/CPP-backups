#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is :" << real << endl;
        cout << "The imaginary part is :" << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr = new Complex;
    //(*ptr).setData(5,8); below line executes the same task.
    ptr->setData(5, 8);//This is called arrow operator.
    //(*ptr).getData();below line executes the same task.
    ptr->getData();
    return 0;
}