#include <iostream>
using namespace std;

void Swap(int &a, int &b) { // pass by reference
  int temp = a;
  a = b;
  b = temp;
}

// func overloading
void Swap(float &a, float &b) {
  float temp = a;
  a = b;
  b = temp;
}

int main() {
  cout << "Enter a and b: ";
  int a, b;
  cin >> a >> b;

  Swap(a, b);

  // swap() inbuilt function in C++ STL

  cout << "After swapping: a = " << a << ", b = " << b << endl;

  float x = 1.5, y = 2.5;
  cout << "Before swapping: x = " << x << ", y = " << y << endl;

  Swap(x, y);
  cout << "After swapping: x = " << x << ", y = " << y << endl;

  return 0;
}
