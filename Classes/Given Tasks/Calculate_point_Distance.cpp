#include <iostream>
#include<math.h>
using namespace std;

class dis
{
    int x, y;

public:
friend void calcDistance(dis f ,dis s);
    dis(int a, int b)
    {
        x = a;
        y = b;
    }
    void DisplayDistance(void)
    {
        cout<<"The co-ordinater of the palnes is "<<x<<" "<<y<<endl;
    }
};
void calcDistance(dis f ,dis s)
  {
    float s1=(s.x-f.x);
    s1=powf(s1,2);
    float s2=(s.y-f.y);
    s2=powf(s2,2);
    float d=sqrtf(s1+s2);
     cout<<d;
  }

int main()
{
    dis d1(4, 5);
    d1.DisplayDistance();
    dis d2(7,9);
    d2.DisplayDistance();
    calcDistance(d1,d2);
     return 0;
}