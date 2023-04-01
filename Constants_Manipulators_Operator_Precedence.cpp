#include<iostream>
#include<iomanip>//This header file includes manipulators.such > endl,setw.
using namespace std;
int main()
{
    /* int a =23;
    cout<<"The value of a was :"<<a<<endl;
    a =45;
    cout<<"The value of a is :"<<a<<endl;

   //                        *****use of constant*****
   //if needed to use a variable in an program as a constant it can be declared as shown below,
   //first declaring the key word (const) then data type of that variable (int,float,long double,char) then its value.
    const int a =45;
    cout<<"The value of const int "<<a<<endl;
    // a=34;after declaring a variable as a constant if by mistake user tries to change the value of that pre declared variable as constant it will give an error*/
     
    //                      *******Manipulators******
     int a =5, b=23,c=1234;
     cout<<"The value of a without setw :"<<a<<endl;
     cout<<"The value of b without setw :"<<b<<endl;
     cout<<"The value of c without setw :"<<c<<endl;

     cout<<"The value of a with setw :"<<setw(4)<<a<<endl;
     cout<<"The value of b with setw :"<<setw(4)<<b<<endl;
     cout<<"The value of c with setw :"<<setw(4)<<c<<endl;
}

