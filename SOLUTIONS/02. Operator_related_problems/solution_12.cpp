#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;
    cin >> a >> b >> c;
    d = sqrt(b * b - 4 * a * c);
    r1 = (-b + d) / (2 * a);
    r2 = (-b - d) / (2 * a);
    cout << r1<<endl;
    cout << r2<<endl;
    return 0;
}