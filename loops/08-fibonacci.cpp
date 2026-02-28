#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  if (n == 0) {
    cout << "Fibonacci Number is 0";
    return 0;
  }

  int last = 0, pre = 1, cur = 0;

  for (int i = 2; i <= n; i++) {
    cur = last + pre;
    last = pre;
    pre = cur;
  }

  cout << "Fibonacci Number is " << cur;
  return 0;
}
