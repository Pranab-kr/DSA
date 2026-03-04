#include <iostream>
using namespace std;

int Fact(int n = 3) {
  if (n == 0 || n == 1)
    return 1;

  int res = 1;
  for (int i = 2; i <= n; i++) {
    res *= i;
  }

  return res;
}

bool IsPrime(int n) {
  if (n <= 1)
    return false;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0)
      return false;
  }

  return true;
}

int main() {
  cout << "Enter a and b: ";
  int a, b;
  cin >> a >> b;

  cout << "Factorial of " << a << " is " << Fact(a) << endl;
  cout << "Factorial of " << b << " is " << Fact(b) << endl;
  cout << "Factorial of (a-b) is :" << Fact(a - b) << endl;

  if (IsPrime(a)) {
    cout << a << " is a prime number." << endl;
  } else {
    cout << a << " is not a prime number." << endl;
  }

  if (IsPrime(b)) {
    cout << b << " is a prime number." << endl;
  } else {
    cout << b << " is not a prime number." << endl;
  }

  return 0;
}
