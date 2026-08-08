#include <iostream>
using namespace std;

int power(int n) {
  if (n == 1)
    return 2;

  return 2 * power(n - 1);
}

int main(int argc, char *argv[]) {
  int n;
  cout << "Enter a num: ";
  cin >> n;

  if (n <= 0) {
    cout << "power is: " << 1;
    return 0;
  }

  cout << "power is: " << power(n);
  return 0;
}
