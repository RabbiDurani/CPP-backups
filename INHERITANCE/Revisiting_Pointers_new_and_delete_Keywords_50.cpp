#include<iostream>
using namespace std;

int main()
{
    //Basic example
    int a=4;
    int *ptr=&a;
    cout<<"The value of a is :"<<*(ptr)<<endl;
    //new operator
    int *p=new int(40);//This keyword (new int)dynamically sets values for pointers.
    cout<<"The value at address p is :"<<*(p)<<endl;
    //This way we can dynamically access the heap memory and use it.
    int *arr=new int [3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    //delete arr;//the keyword (delete) deletes or frees up the memory was dynamically allocated.
    cout<<"The value at address arr[0] is :"<<arr[0]<<endl;
    cout<<"The value at address arr[1] is :"<<arr[1]<<endl;
    cout<<"The value at address arr[2] is :"<<arr[2]<<endl;
    return 0;
}