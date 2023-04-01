#include<iostream>
using namespace std;

int factorial(int x)
{
    int fact =1,j;
    for(j=1;j<=x;j++)
    {
        fact=fact*j;
    }
    return(fact);
}

int main()
{
     int n,r,ncr;

    cin>>n>>r;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ncr;
    return 0;
}