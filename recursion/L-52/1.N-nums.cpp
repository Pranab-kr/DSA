#include <iostream>
using namespace std;

void printNum(int n) {
  if (n == 1) {
    cout << n << endl;
    return;
  }
  printNum(n - 1);
  cout << n << endl;
}

// void printNum(int num, int n) {
//   if (num == n) {
//     cout << num << endl;
//     return;
//   }
//   cout << num << endl;
//   printNum(num + 1, n);
// }

int main(int argc, char *argv[]) {
  int n;
  cout << "entera num: ";
  cin >> n;
  printNum(n);

  // printnum(1,n);
  return 0;
}
