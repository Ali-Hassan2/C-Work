#include <cmath>
#include <iostream>
using namespace std;

void getTriangleArea(double a, double b, double c, double &area) {
  
  double s = (a + b + c) / 2;

  
  area = sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
 
  double a = 3, b = 4, c = 5;
  double area;

  getTriangleArea(a, b, c, area);

  std::cout << "The area of the triangle is: " << area << endl;

  return 0;
}
