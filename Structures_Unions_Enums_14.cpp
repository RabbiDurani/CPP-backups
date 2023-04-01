#include <iostream>
#include <string.h>
using namespace std;

struct employee
{
    int Eid;
    char favchar;
    float salary;
    string name;
    string address;
};
union money
{
    int rice;
    char car;
    float pound;
};

int main()
{
    struct employee rabbi;
    rabbi.Eid = 1;
    rabbi.favchar = 'r';
    rabbi.salary = 53527.63;
    rabbi.name = "Rakibul islam Rabbi";
    cout << "Enter employee address :";
    getline(cin, rabbi.address);//The library function is used for taking input for a string.
    cout << "Address is : " << rabbi.address << endl;
    cout << "The value is :" << rabbi.Eid << endl;
    cout << "The value is :" << rabbi.favchar << endl;
    cout << "The value is :" << rabbi.salary << endl;
    cout << "The value is :" << rabbi.name << endl;

    /* union money m1;
     m1.rice =34;
      m1.car ='c';
      //m1.pound =373478.74;
    //  cout<<m1.car;
    enum
    {
        breakfast,
        lunch,
        dinner
    };
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinn<<endl;*/

    return 0;
}
