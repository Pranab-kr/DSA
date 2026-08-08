
#include <iostream>
using namespace std;

void evenPrint(int n) {
  if (n < 2)
    return;
  if (n % 2 != 0)
    n--;

  if (n == 2) {
    cout << 2;
    return;
  }
  cout << n << endl;
  evenPrint(n - 2);
}
int main() {
  int n;
  cout << "Enter the n:";
  cin >> n;

  evenPrint(n);

  return 0;
}
