#include<iostream>
using namespace std;

int main()
{
      int num,count=0,i;

    cin>>num;

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if (num ==1)
    cout<<"Not prime";
    else if(count==0)
        cout<<"Prime";

    else
        cout<<"Not prime";
    return 0;
}