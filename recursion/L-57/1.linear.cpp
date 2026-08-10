#include <iostream>
using namespace std;

int linear(int arr[], int n, int tar) {

  if (n < 0)
    return -1;

  if (arr[n] == tar)
    return n;
  else
    return linear(arr, n - 1, tar);
}

int main(int argc, char *argv[]) {
  int arr[] = {2, 4, 7, 3, 11, 8, 12};
  int tar = 8;

  cout << linear(arr, 6, tar);
  return 0;
}
