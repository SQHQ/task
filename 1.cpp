

#include<iostream>
#include<cmath>
using namespace std;

class point 
{
  public:
      point();
      int getX();
      void setX();
      double distance();
  private:
      int x_coord,y_coord;	  
};
point::point()
{
  x_coord = 1;
  y_coord = 1;
}
int point::getX()
{
  return x_coord;
}
void point::setX()
{
  int x;
  cout << "输入x的值：";
  cin >> x;
  x_coord = x;
}
double point::distance()
{
  int s;
  s = x_coord*x_coord + y_coord*y_coord;
  return sqrt(s);
}

int main()
{
  point p1;
  p1.setX();
  cout << "x_coord=" << p1.getX() << endl;
  cout << "s=" << p1.distance() << endl;
  return 0;
}

