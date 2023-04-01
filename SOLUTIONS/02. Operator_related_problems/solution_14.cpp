#include <iostream>
#include <math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    float x;
    cin >> x;
    cout << "A : " << ceil(x) << endl;
    cout << "B : " << floor(x) << endl;
    cout << "C : " << fabs(x) << endl;
    return 0;
}