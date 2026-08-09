#include <iostream>
using namespace std;

int sum(int arr[], int n) {
  if (n == 0)
    return arr[n];

  return arr[n] + sum(arr, n - 1);
}

int main(int argc, char *argv[]) {
  int arr[] = {3, 4, 5, 8, 2};
  cout << sum(arr, 4);
  return 0;
}
