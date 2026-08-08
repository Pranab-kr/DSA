// for N >= 1
#include <iostream>
using namespace std;

int sqsum(int n) {
  if (n == 1)
    return 1;

  return n * n + sqsum(n - 1);
}

int main(int argc, char *argv[]) {
  int n;
  cout << "Enter a num: ";
  cin >> n;

  cout << "sqsum is: " << sqsum(n);
  return 0;
}
