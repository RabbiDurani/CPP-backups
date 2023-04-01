#include<iostream>
using namespace std;
int glo=6;
void sum()
{ 
   int a;
   cout<< "sum="<<glo<<"\n";
}
int main()
{
     int glo=9;
    glo=78;
    int a=7;
    int b=9;
    float pi=3.1416;
    char c='U';
    sum();
    bool is_true =false;
   
    cout<<"This is tutorial 4.\nThe value of a is "<< a<<"\nThe value of b is "<< b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    cout <<"\n"<<glo;
    cout<<"\n"<<is_true;
    return 0;
}
