#include <iostream>
using namespace std;

int main()
{
    int num[20], i, n, sum = 0;
    cin >> n;

    for (i = 0; i <= n - 1; i++)

    {
        cin >> num[i];
    }

    for (i = 0; i < n; i++)

    {
        sum = sum + num[i];
    }
    cout << sum;
    return 0;
}