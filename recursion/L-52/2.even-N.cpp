#include <iostream>
using namespace std;

void printEven(int n) {

  if (n < 2)
    return;

  printEven(n - 2);
  cout << n << endl;
}

int main(int argc, char *argv[]) {
  int n;
  cout << "entera num: ";
  cin >> n;

  // to handle odd num
  if (n % 2 != 0)
    n--;

  printEven(n);

  return 0;
}
