
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {

    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1])
        swap(arr[j], arr[j - 1]);
      else
        break;
    }
  }
}

int main() {
  cout << "Enter how many ele: " << endl;
  int n, arr[1000];
  cin >> n;
  cout << "Enter the ele of the arr: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  insertionSort(arr, n);

  cout << "After sort the arr is: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
