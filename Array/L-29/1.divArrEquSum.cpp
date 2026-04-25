#include <iostream>
#include <vector>
using namespace std;

bool divide(vector<int> &arr) {
  int sum = 0, n = arr.size();

  for (int i = 0; i < n; i++)
    sum += arr[i];

  int prefx = 0;
  for (int i = 0; i < n - 1; i++) {
    prefx += arr[i];
    if (prefx == sum - prefx)
      return true;
  }

  return false;
}

int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  if (divide(arr))
    cout << "Yes, the array can be divided into two parts with equal sum."
         << endl;
  else
    cout << "No, the array cannot be divided into two parts with equal sum."
         << endl;

  return 0;
}
