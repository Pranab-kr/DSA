#include <iostream>
using namespace std;

int main() {
  int num, res = 0, p = 1;

  cout << "Enter a number : ";
  cin >> num;

  while (num > 0) {
    int rem = num % 8;
    res = res + rem * p;
    p *= 10;
    num /= 8;
  }

  cout << "Octal : " << res << endl;
}
