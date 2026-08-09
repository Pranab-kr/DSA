#include <algorithm>
#include <iostream>
using namespace std;

int minEle(int arr[], int n) {
  if (n == 0)
    return arr[n];

  return min(arr[n], minEle(arr, n - 1));
}

int main(int argc, char *argv[]) {
  int arr[] = {7, 2, 4, 1, 6};
  cout << minEle(arr, 4);
  return 0;
}
