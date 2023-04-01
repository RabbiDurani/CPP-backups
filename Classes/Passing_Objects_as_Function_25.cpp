#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter id of employee ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    /*Employee rabbi, shakil, riad;
    rabbi.setId();
    rabbi.geId();*/
    // When items of objects becomes a lot then to access them and creating them use arrays in loops.
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
