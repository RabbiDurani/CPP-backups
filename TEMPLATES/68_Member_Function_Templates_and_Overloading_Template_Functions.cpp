#include <iostream>
using namespace std;

template <class T>
class Rabbi
{
public:
    T data;
    Rabbi(T d)
    {
        data = d;
    }
    /*void Display(void)
    {
        cout<<"Passed value is :"<<data<<endl;
    }*/
    void Display(void);
};
template <class T>
void Rabbi<T>::Display(void)
{
    cout << "The passed value is :" << data << endl;
}
void func(int a)
{
    cout << "I am templetised :" << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am templetised :" << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am templetised :" << a << endl;
}
int main()
{
    /*Rabbi<float> r(2.243);
     Rabbi<char> r('R');
     r.Display();*/
    // func(4); // The function makes the exact match is given precedence.
    func1(8);
    return 0;
}