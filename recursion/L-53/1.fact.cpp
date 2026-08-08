#include <iostream>
using namespace std;

int fact(int n) {
  if (n == 0)
    return 1;

  return n * fact(n - 1);
}

int main(int argc, char *argv[]) {
  int n;
  cout << "Enter a num: ";
  cin >> n;

  if (n < 0) {
    cout << "Factorial is not possible";
    return 0;
  }

  cout << "Factorial of the num " << n << " is: " << fact(n);
  return 0;
}
