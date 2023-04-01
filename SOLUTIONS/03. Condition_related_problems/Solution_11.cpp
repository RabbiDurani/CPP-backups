#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;

    if (i > 100 || i < 0)
        cout << "Invalid number";

    else if (i >= 90 && i <= 100)
        cout << "Grade=A";

    else if (i >= 86 && i <= 89)
        cout << "Grade=A-";

    else if (i >= 82 && i <= 85)
        cout << "Grade=B+";

    else if (i >= 78 && i <= 81)
        cout << "Grade=B";

    else if (i >= 74 && i <= 77)
        cout << "Grade=B-";

    else if (i >= 70 && i <= 73)
        cout << "Grade=C+";

    else if (i >= 66 && i <= 69)
        cout << "Grade=C";

    else if (i >= 62 && i <= 65)
        cout << "Grade=C-";

    else if (i >= 58 && i <= 61)
        cout << "Grade=D+";

    else if (i >= 55 && i <= 57)
        cout << "Grade=D";

            else if (i < 55)
                cout<< "F";
}
