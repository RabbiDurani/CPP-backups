#include <iostream>
using namespace std;

class BankDeposit
{
    int principle, years;
    float interestRate, returnValue;

public:
    BankDeposit() {} // This is a blank constructor.Which declares blank objects and then the user overwrites them.if is not declared then it will throw error as there's no default constructor exist for the class.
    // So mainly this blank constructor works as a default constructor.
    BankDeposit(int p, int y, float ri);
    BankDeposit(int p, int y, int ri);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float ri)
{
    principle = p;
    years = y;
    interestRate = ri;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int Ri)
{
    principle = p;
    years = y;
    interestRate = float(Ri) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposit ::show()
{
    cout << "Your principle amount was :" << principle
         << " . Return value after " << years << " year is " << returnValue << "." << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, Ri;
    float ri;
    cout << "Enter the value of p , y & ri  :";
    cin >> p >> y >> ri;
    bd1 = BankDeposit(p, y, ri);
    bd1.show();
    cout << "Enter value of p , y & Ri :";
    cin >> p >> y >> Ri;
    bd2 = BankDeposit(p, y, Ri);
    bd2.show();
    return 0;
}