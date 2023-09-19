// area of pie slice = pie*r*r/theta
// perimeter of pie slice = (2*pie*r*theta / 360) + (2*r)
// arc length of pie slice = 2*pie*r*theta / 360

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  double r, theta;
  cout << "Enter the radius of the pie slice (cm): ";
  cin >> r;
  cout << "Enter the angle of the pie slice (degree): ";
  cin >> theta;
  cout.setf(ios::fixed,ios::floatfield);
  cout.precision(3);
  cout << "The area of the pie slice is " << M_PI*r*r*theta/360 << " cm^2\n";
  cout << "The perimeter of the pie slice is " << 2*M_PI*r*theta/360 + 2*r << " cm\n";
  cout << "The arc length of the pie slice is " << 2*M_PI*r*theta/360 << " cm\n";
  cout << "Press Enter key to continue...";
  cin.get();
  cin.get();
  cout << "Bye...";
  return 0;
}