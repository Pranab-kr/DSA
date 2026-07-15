#include <iostream>
using namespace std;

int main() {
  int n;
  int res = 0;
  int p = 1;

  cout << "Enter a decimal number: ";
  cin >> n;

  while (n > 0) {
    int r = n % 2;
    res = res + r * p;
    p *= 10;
    n /= 2;
  }

  cout << "Binary number: " << res << endl;
}
