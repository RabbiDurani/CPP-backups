#include <iostream>
using namespace std;

int main()
{
    int n, i, fact = 1,temp;

    cin >> n;
    temp=n;
  cout<<n<<" !=";
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
       cout<<temp<<"*";
       temp--;
    }

    cout <<"=" << fact;
    return 0;
}