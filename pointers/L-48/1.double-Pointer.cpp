#include <iostream>
using namespace std;

// void f1(int *ptr) // copy of pointer
// {
//   ptr = ptr + 1; // only local copy changes
// }
//
// void f2(int **ptr) // pointer to pointer
// {
//   *ptr = *ptr + 1; // original pointer changes
// }

void f3(int *&ptr) // reference to pointer
{
  ptr = ptr + 1; // original pointer changes
}

int main() {

  int n = 10;

  int *p = &n;     // single pointer
  int **p1 = &p;   // double pointer
  int ***p2 = &p1; // tripple pointer

  cout << p << endl;
  // f3(p); // change the address of pointer

  cout << p << endl;

  cout << n << endl;
  ***p2 = ***p2 + 10; // change the val of the n using tripple pointer

  cout << n << endl;

  // address check
  cout << &p1 << endl;
  cout << p2 << endl;

  return 0;
}
