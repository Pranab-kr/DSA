#include <iostream>
using namespace std;

int findSum(int arr[], int idx, int n, int sum) {

  if (sum < 0)
    return 0;
  if (idx == n)
    return sum == 0;

  // if we take don't take the ele we increase the idx for next idx ele check,
  // if we take ele don't increase the ele cause we want to use that ele again
  // to find is sum is possible.
  return findSum(arr, idx + 1, n, sum) + findSum(arr, idx, n, sum - arr[idx]);
}

int main(int argc, char *argv[]) {
  int arr[3] = {2, 3, 4};
  int sum = 6;
  cout << findSum(arr, 0, 3, sum);
  return 0;
}

// If sum = S and minimum element in arr is m:
// SC=O(n+S/m)
// TC -> O(2^n+S)

// if zero in ip arr then infinite recursion loop
