
#include <iostream>
using namespace std;

void numPrint(int n) {
  if (n == 1) { // Base case
    cout << 1;
    return;
  }
  cout << n << endl;
  numPrint(n - 1);
}
int main() {
  int n;
  cout << "Enter the n: ";
  cin >> n;

  numPrint(n);

  return 0;
}
