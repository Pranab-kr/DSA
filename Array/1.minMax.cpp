#include <climits>
#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  int res = INT_MAX;
  for (int i = 0; i < n; i++) {
    res = min(res, arr[i]);
  }
  cout << "Minimum element is: " << res << endl;

  res = INT_MIN;

  for (int i = 0; i < n; i++) {
    res = max(res, arr[i]);
  }
  cout << "Maximum element is: " << res << endl;

  return 0;
}
