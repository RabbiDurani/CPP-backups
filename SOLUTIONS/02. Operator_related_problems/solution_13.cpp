#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x,r,w,v;
    cin>>x;

    double z;
    z=cos(x);
    w=sqrt(3)*sin(x);
    v=log(x);
    r=(2*z*z)-w+(v/2);
    cout<<r;
    return 0;
}