#include <iostream>
using namespace std;

int main()
{
    int x, y,inc,dec;
    cin >> x >> y;
    inc=x += y;
    dec=x-=y;
    cout << "Incremented Value:" << inc<<endl;
    cout << "Decremented Value:" << dec<<endl;
    return 0;
}