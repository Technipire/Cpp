#include <iostream>
using namespace std;
class Point
{
public:
  double x , y;
  Point(double nx, double ny)
  {
    x = nx;
    y = ny;
  }
  Point(Point &o)
  {
    x = o.x;
    y = o.y;
  }
  
 
};

void printPoint(Point &p)
{
  p.x = p.x * p.y;
}

void printNumber(int *a)
{
  *a =  *a * *a;
}

int main()
{
  int x = 5;
  Point q(2.0, 2.0);
  Point r = q;
  cout << r.x << " " << r.y << endl;
  printPoint(r);
  cout << r.x << endl;
  printNumber(&x);
  cout << x <<endl;
}

