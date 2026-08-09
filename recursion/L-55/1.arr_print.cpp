#include <iostream>
using namespace std;

void printRev(int arr[], int n) {
  if (n == -1)
    return;
  cout << arr[n] << " ";
  printRev(arr, n - 1);
  return;
}
void printArr(int arr[], int n) {
  if (n == -1)
    return;
  printArr(arr, n - 1);
  cout << arr[n] << " ";
  return;
}

int main(int argc, char *argv[]) {
  int arr[] = {3, 7, 6, 2, 8};
  printArr(arr, 4);
  cout << endl;
  printRev(arr, 4);
  return 0;
}
