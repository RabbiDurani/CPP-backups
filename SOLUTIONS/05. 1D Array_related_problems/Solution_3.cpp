#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;

    for (i = 1; i <= n; i++)

    {
        if (i % 2 != 0)
            cout << "1,";
        else
            cout << "0,";
    }
}