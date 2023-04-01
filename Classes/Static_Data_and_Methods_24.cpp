#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is " << count << endl; // In a static function only the static variables are accssable.Its not posssible to work with non static varibles
    }
};
int Employee ::count = 100;

int main()
{
    Employee rabbi, shakil, riad;

    rabbi.setData();
    rabbi.getData();
    Employee ::getcount(); // To use a static function in main it is not needed for any sort of reference of objects.It can'be accessed with the name of class.
    shakil.setData();
    shakil.getData();
    Employee ::getcount();
    riad.setData();
    riad.getData();
    Employee ::getcount();
    return 0;
}
