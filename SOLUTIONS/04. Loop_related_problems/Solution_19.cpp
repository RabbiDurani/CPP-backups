#include <iostream>
using namespace std;

int main()
{
    int i, n, x = 1, sum = 0;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("%d", i);
        else
        {
            x = x * 10 + i;
            cout << "+" << x;
        }
        sum = sum + x;
    }
    cout <<"=" <<sum;
    return 0;
}