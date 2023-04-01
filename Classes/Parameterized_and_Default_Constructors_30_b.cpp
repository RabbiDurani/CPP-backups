#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void DisplayPoint(void)
    {
        cout << "The point is " << x << " , " << y << endl;
    }
};

int main()
{
    point p(1, 1);
    p.DisplayPoint();
    point q(4, 4);
    q.DisplayPoint();
    return 0;
}