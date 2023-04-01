#include<iostream>
using namespace std;
int main()
{
    int a=5,b=4;
    cout<<"Followings are the Arithmatic operators in c++"<<endl;
    //Arithmatic operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    //Assignment operators -->used to assign values to variables;
    //int a=5,float v=3.746;
    //char ='A';
    //Comparison operators
     cout<<"Followings are the Comparison operators in c++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;

    //Logical operatos
    cout<<"Followings are the Logical operators in c++"<<endl;
    cout<<"The value of this logical operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical operator ((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of this logical operator (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}
