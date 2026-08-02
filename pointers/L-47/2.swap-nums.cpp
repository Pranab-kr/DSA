#include <iostream>
using namespace std;

void swapping(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 10, b = 20;

  swapping(&a, &b);

  cout << "a: " << a << " " << "b: " << b;

  return 0;
}
