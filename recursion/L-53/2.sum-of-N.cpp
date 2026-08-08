
#include <iostream>
using namespace std;

int sumOfN(int n) {
  if (n == 1)
    return 1;

  return n + sumOfN(n - 1);
}

int main(int argc, char *argv[]) {
  int n;
  cout << "Enter a num: ";
  cin >> n;

  if (n <= 0) {
    cout << "sumOfN is: " << 0;
    return 0;
  }

  cout << "sumOfN of the num " << n << " is: " << sumOfN(n);
  return 0;
}
