#include <iostream>
using namespace std;

int main()
{

    int i, n, sum, result;

    cin >> n;
    if (n % 2 == 0)
    {
        result = (n / 2) * (-1);
        cout << result << endl;
    }
    else
    {
        sum = (n + 1) / 2;
        cout << sum << endl;
    }
    return 0;
}