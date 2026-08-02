#include <iostream>
using namespace std;

int main() {

  int a = 10;
  // print address of a
  cout << &a << endl;

  int *ptr = &a;
  cout << ptr << endl;
  cout << *ptr << endl; // value inside a print
  cout << sizeof(ptr)
       << endl; // 8 byte means 64 bit (for a single memory address block) for
                // 64 bit system(8+ gb ram) total address block 2^33

  int b = 20;
  ptr = &b;

  cout << &b << endl;
  cout << ptr << endl;
  cout << *ptr << endl;

  *ptr = 50;
  cout << b << endl;

  return 0;
}
