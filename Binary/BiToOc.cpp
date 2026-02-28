#include <iostream>
using namespace std;

int main() {
  int num, res = 0, p = 1;

  cout << "Enter a number : ";
  cin >> num;

  while (num > 0) {
    int rem = num % 10;
    res = res + rem * p;
    p *= 2;
    num /= 10;
  }
  cout << "decimal : " << res << endl;

  p = 1;

  int octal = 0;
  while (res > 0) {
    int rem = res % 8;
    octal = octal + rem * p;
    p *= 10;
    res /= 8;
  }

  cout << "Octal : " << octal << endl;
}
