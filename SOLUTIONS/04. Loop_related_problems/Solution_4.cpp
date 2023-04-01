#include<iostream>
using namespace std;

int main()
{
    int i,n;
    float r,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>j;
        r=r+j;
    }
    cout<<r/n;
    return 0;
}