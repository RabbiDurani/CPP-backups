#include <iostream>
using namespace std;

int main()
{
    int num, temp, r, sum = 0;
    cin >> num;
    temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    if (num == sum)
        cout << "Yes";

    else
        cout << "N0";
    return 0;
}