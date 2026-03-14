#include <iostream>
using namespace std;

int main() {
  int m;
  cout << "Enter the number of Fibonacci numbers to generate: ";
  cin >> m;

  int arr[1000]; // Assuming m will not exceed 1000
  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i < m; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  cout << "The first " << m << "th fibo num is: " << arr[m - 1] << endl;
}
