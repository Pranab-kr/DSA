#include <iostream>
using namespace std;

int main() {

  int a = 10;
  // print address of a
  cout << &a << endl;

  int *ptr = &a;
  cout << ptr << endl;
  cout << *ptr << endl; // value inside a print

  int b = 20;
  ptr = &b;

  cout << &b << endl;
  cout << ptr << endl;
  cout << *ptr << endl;

  return 0;
}
