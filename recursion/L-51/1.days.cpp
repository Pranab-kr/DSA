#include <iostream>
using namespace std;

void fun(int n) {
  if (n == 0) { // Base case
    cout << "Happy Birthday!";
    return;
  }
  cout << n << " days left for the Birthday" << endl;
  fun(n - 1);
}
int main() {
  int n;
  cout << "Enter how many days left: ";
  cin >> n;

  fun(n);

  return 0;
}
