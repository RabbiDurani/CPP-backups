#include<iostream>
using namespace std;
int c=79;
int main()
{
    /*                             ********Built in data types*********
    int a,b,c;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is : "<<c<<endl;
    cout<<"The value of Global C : "<<::c<<endl;//The operator(::) is known as scope resolution operator.This comes to use to access the global variable.
    
    float d=34.4l;     //To type cast a number in c++ just have to add the first letter of that data type at the end of the value;
    long double e=2.1416f;
   // cout<<"The value of d is : "<<d<<endl<<"The valaue of e is : "<<e;
                        ******** Float double & long double literals *********
    cout<<"The size of 34.4 is  :"<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is :"<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is :"<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is :"<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is :"<<sizeof(34.4L)<<endl;
   */
  //                   ******* Reference variables ********
  int f=344;
  int & g=f;
  cout<<f<<endl;
  cout<<g<<endl;
    return 0;
}