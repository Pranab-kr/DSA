#include <iostream>
using namespace std;

int main() {
  int n;
  int res = 0;
  int p = 1;
  cout << "Enter a binary number: ";
  cin >> n;

  while (n != 0) {
    int r = n % 10;
    res = res + r * p;
    p *= 2;
    n /= 10;
  }

  cout << "Decimal number: " << res << endl;
}
