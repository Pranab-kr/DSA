#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
  int start = 0, end = n - 1;
  while (start <= end) {
    int mid = (start + end) / 2;

    if (arr[mid] == target)
      return mid;

    else if (arr[mid] < target)
      start = mid + 1;

    else
      end = mid - 1;
  }

  return -1;
}
int main(int argc, char *argv[]) {

  int n, arr[1000];
  cout << "Enter how many ele: ";
  cin >> n;
  cout << "Enter the ele of the arr: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int target;
  cout << "Enter the ele to search: ";
  cin >> target;

  cout << "The ele was found at index: " << binarySearch(arr, n, target);

  return 0;
}
