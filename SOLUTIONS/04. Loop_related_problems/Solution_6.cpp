#include <iostream>
using namespace std;

int main()
{
    int x, n = 3, y;
    cin >> x;

    while (n != 0)
    {
        cin >> y;
        if (x == y)
        {
            cout << "Right, Player-2 wins!";
            break;
        }
        else if (x != y)
        {
            cout << "Wrong," << n - 1 << " Choice(s) Left !"<<endl;
        }
        n--;
    }
    if (n == 0)
        cout << "Player-1 wins!";
    return 0;
}