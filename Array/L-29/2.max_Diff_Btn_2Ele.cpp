#include <iostream>
#include <vector>
using namespace std;

int maxDiff(vector<int> &arr) {
  int n = arr.size(), maxDi = -1, sufixMax = 0;

  for (int i = n - 1; i >= 0; i--) {
    sufixMax = max(arr[i], sufixMax);

    maxDi = max(maxDi, sufixMax - arr[i]);
  }

  return maxDi;
}

int main() {

  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << maxDiff(arr);

  return 0;
}

// Maximum Difference between Two Elements such that Larger Element Appears
// after the Smaller Element
// Given an array of integers, the task is to find the maximum difference
// between any two elements such that larger element appears after the smaller
// number.  We mainly need to find maximum difference in an inversion (larger
// before smaller)

// Note : If no such pair exists,
//        return -1.
//
//               Examples :
//
//     Input : arr = [ 2, 3, 10, 6, 4, 8, 1 ] Output : 8 Explanation
//     : The maximum difference is between 10 and 2.
//
//       Input : arr = [ 7, 9, 5, 6, 3, 2 ] Output
//               : 2 Explanation : The maximum difference is between 9 and 7.
//
//                                 Input : arr = [ 4, 3, 3, 2, 1 ] Output
//     : -1 Explanation
//     : No such pair exists such that i < j and arr[i] < arr[j].
