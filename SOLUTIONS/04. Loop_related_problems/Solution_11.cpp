#include <iostream>
using namespace std;

int main()
{
    int fibo, n, first = 0, second = 1, count = 1;

    cin >> n;

    while (count <= n)
    {
        if (count <= 1)
            fibo = count;

        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        cout << fibo << ",";
        count++;
    }
    return 0;
}