#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x < y)
    {
        while (x * x != y * y)
        {
            cout << x * x<<",";
            x++;
        }
        cout << "Reached!" << endl;
    }
    else if (x > y)
    {
        while (x * x != y * y)
        {
            cout << x * x<<",";
            x--;
        }
        cout << "Reached!" << endl;
    }
    else if (x == y)

        cout << "Reached!" << endl;
    return 0;
}