
// TC -> O(2^n),
// SC -> O(n) // for stack size only exclude the ans vector

#include <iostream>
using namespace std;

bool Find(int arr[], int idx, int n, int tar) {
  // if (tar == 0)
  //   return 1;
  // if (idx == n || tar < 0)
  //   return 0;

  if (tar < 0)
    return 0;
  if (idx == n)
    return tar == 0;

  return Find(arr, idx + 1, n, tar) || Find(arr, idx + 1, n, tar - arr[idx]);
}

int main(int argc, char *argv[]) {
  int arr[4] = {3, 6, 4, 5};
  int ans;
  int tar = 12;

  cout << Find(arr, 0, 4, tar);

  return 0;
}
