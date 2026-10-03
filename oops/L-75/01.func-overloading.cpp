// polymorphism -> compile time -> func overloading
#include <iostream>
using namespace std;

class Area {

public:
  int area(int a) { return a * a; }            // square area
  int area(int l, int b) { return l * b; }     // rectangle area
  float area(float r) { return 3.14 * r * r; } // circle area
};

int main() {

  Area a;
  cout << "Area of square: " << a.area(5) << endl;
  cout << "Area of rectangle: " << a.area(5, 10) << endl;
  cout << "Area of circle: " << a.area(5.0f) << endl;

  return 0;
}
