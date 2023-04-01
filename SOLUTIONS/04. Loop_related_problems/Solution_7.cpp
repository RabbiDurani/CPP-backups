#include <iostream>
using namespace std;

int main()
{
    char ch = 'A', c;
    for (int i = 1;; i++)
    {
        cin >> c;
        if (c != ch)
        {
            cout << "Input " << i <<": "<<c<<endl;
        }
        else if (c == ch)
        {
            return 0;
        }
    }

    return 0;
}