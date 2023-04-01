#include<iostream>
using namespace std;

int main()
{
    int num,flag;
    cin>>num;
    flag=0;
    while(num!=1)
    {
        if(num%2!=0)
        {
            flag=1;
            break;
        }
        num=num/2;
    }
    if(flag==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}