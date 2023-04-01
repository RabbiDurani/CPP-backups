#include <iostream>
using namespace std;

int main()
{
    int arr[20], i, n;
    cin >> n;
    for (i = 0; i <=n-1; i++)
    {
        cin >> arr[i];
    }
    i = 0;
    for (i = n-1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}