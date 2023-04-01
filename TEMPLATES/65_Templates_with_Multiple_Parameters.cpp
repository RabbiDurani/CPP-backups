#include <iostream>
using namespace std;
/*Syntax for templates with multiple parameters
template<class t1,class t2>
class name of class
{
    body
}*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void Display(void)
    {
        cout << this->data1<<endl << this->data2;
    }
};
int main()
{
    myClass<int, float> obj(1, 9.9);
    obj.Display();
    return 0;
}