#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
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

  selectionSort(arr, n);

  cout << "After sort the arr is: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
