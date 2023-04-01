#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int marks[] = {23, 45, 65, 76};
    int mathmarks[] = {646, 733, 367, 837};
    cout << "These are math marks :" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    cout << "These are regular marks :" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    for (i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is :" << marks[i] << endl;
        cout << "The value of math marks " << i << " is :" << mathmarks[i] << endl;
    }
    cout << "\n";
    while (i < 4)
    {
        cout << "The value of marks " << i << " is :" << marks[i] << endl;
        cout << "The value of math marks " << i << " is :" << mathmarks[i] << endl;
        i++;
    }
     cout << "\n";
    do
    {
        cout << "The value of marks " << i << " is :" << marks[i] << endl;
        cout << "The value of math marks " << i << " is :" << mathmarks[i] << endl;
        i++;
    } while (i < 4);
    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p);
    // cout<<"The value of *p [0] is :"<<*p<<endl;
    // cout<<"The value of *(p+1) [1] is :"<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) [2] is :"<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) [3] is :"<<*(p+3)<<endl;
    return 0;
}
