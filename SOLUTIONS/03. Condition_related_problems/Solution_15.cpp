#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, x, n = 3, flag;
    cin >> x;
    flag = 0;
    cin >> n1;
    if (x == n1)
    {
        cout << "Right Player 2 win's" << endl;
        return 0;
    }
    else
    {
        cout << "Wrong " << n - 1 << "chances left !" << endl;
    }
    flag = 1;
    cin >> n2;
    if (x == n2)
    {
        cout << "Right Player 2 win's" << endl;
        return 0;
    }
    else
    {
        cout << "Wrong " << n - 1 << "chances left !" << endl;
    }
    flag = 1;
    cin >> n3;
    if (x == n3)
    {
        cout << "Right Player 2 win's" << endl;
        return 0;
    }
    else
    {
        cout << "Wrong" << n - 3 << "chances left !" << endl;
    }
    return 0;
}