#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 5, b = 4;
    cout << "The value of a is " << a << " The value of b is " << b << endl;
    swap(a, b);
    return 0;
}
