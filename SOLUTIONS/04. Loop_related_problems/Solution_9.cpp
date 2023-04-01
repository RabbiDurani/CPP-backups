#include <iostream>
using namespace std;

int main()
{
    float a, hw, ct, mt, tf;
    int n, b = 1;
    cout << "Number of students :" << endl;
    cin >> n;

    while (n != 0)
    {
        cout << "Attendance for student  :" << endl;
        cin >> a;
        a = (a * 5) / 5;

        cout << "Assignments for student  :" << endl;
        cin >> hw;
        hw = (hw * 10) / 10;

        cout << "Class tests for student  :" << endl;
        cin >> ct;
        ct = (ct * 15) / 15;

        cout << "Midterm for student  :" << endl;
        cin >> mt;
        mt = (mt * 30) / 50;

        cout << "Final term for student  :" << endl;
        cin >> tf;
        tf = (tf * 40) / 100;

        int sum = (a + hw + ct + mt + tf);

        if (sum >= 90 && sum <= 100)
            cout << "Student " << b << ": A" << endl;

        else if (sum >= 86 && sum <= 89)
            cout << "Student " << b << ": A-" << endl;

        else if (sum >= 82 && sum <= 85)
            cout << "Student " << b << ": B+" << endl;

        else if (sum >= 78 && sum <= 81)
            cout << "Student " << b << ": B" << endl;

        else if (sum >= 74 && sum <= 77)
            cout << "Student " << b << ": B-" << endl;

        else if (sum >= 70 && sum <= 73)
            cout << "Student " << b << ": C+" << endl;

        else if (sum >= 66 && sum <= 69)
            cout << "Student " << b << ": c" << endl;

        else if (sum >= 62 && sum <= 65)
            cout << "Student " << b << ": C-" << endl;

        else if (sum >= 58 && sum <= 61)
            cout << "Student " << b << ": D+" << endl;

        else if (sum >= 55 && sum <= 57)
            cout << "Student " << b << ": D" << endl;

        else if (sum < 55)
            cout << "Student " << b << ": F" << endl;
        n--;
        b++;
    }
    return 0;
}