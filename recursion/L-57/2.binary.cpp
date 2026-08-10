#include <iostream>
using namespace std;

int binary(int arr[], int st, int end, int tar) {

  if (st > end)
    return -1;

  int mid = st + (end - st) / 2;

  if (arr[mid] == tar)
    return mid;
  else if (arr[mid] < tar)
    return binary(arr, mid + 1, end, tar);
  else
    return binary(arr, st, mid - 1, tar);
}

int main(int argc, char *argv[]) {
  int arr[] = {2, 4, 7, 3, 11, 8, 12};
  int tar = 8;

  cout << binary(arr, 0, 6, tar);
  return 0;
}
