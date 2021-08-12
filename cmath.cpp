#include <iostream>
#include <cmath>

using namespace std;

class point
{
    int x, y;

public:
    point(int b, int c)
    {
        x = b;
        y = c;
    }
    void displayPoint()
    {
        cout << "The point of x " << x << " and y " << y << endl;
    }
    friend double distance(point, point);
};
double distance(point p1, point p2)
{
    double res = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return res;
}
int main()
{
    point p(1, 0);
    p.displayPoint();

    point q(70, 0);
    q.displayPoint();

    double result = distance(p, q);
    cout << result << endl;
    return 0;
}