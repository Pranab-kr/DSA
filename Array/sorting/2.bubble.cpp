#include <iostream>
using namespace std;

void bubble(int arr[], int n) {

  for (int i = n - 2; i >= 0; i--) {

    bool swapped = false;

    for (int j = 0; j <= i; j++) {
      if (arr[j] > arr[j + 1]) {

        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}
// other method
//  void bubble(int arr[], int n) {
//
//    for (int i = 0; i < n - 1; i++) {
//
//      bool swapped = false;
//
//      for (int j = 0; j < n - i - 1; j++) {
//        if (arr[j] > arr[j + 1]) {
//
//          swap(arr[j], arr[j + 1]);
//          swapped = true;
//        }
//      }
//      if (!swapped)
//        break;
//    }
//  }
int main() {

  int n, arr[1000];
  cout << "Enter how many ele of the arr: ";

  cin >> n;

  cout << "Enter the ele of the arr: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  bubble(arr, n);

  cout << "After swap arr: ";

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
