// TC -> O(2^n),
// SC -> O(n) // for stack size only exclude the ans vector

#include <iostream>
#include <vector>
using namespace std;

void printSum(int arr[], int idx, int n, int sum, vector<int> &ans) {
  if (idx == n) {
    cout << sum << endl;
    return;
  }

  printSum(arr, idx + 1, n, sum, ans);            // don't take
  printSum(arr, idx + 1, n, sum + arr[idx], ans); // take
}

int main(int argc, char *argv[]) {
  int arr[3] = {3, 4, 5};
  vector<int> ans;
  printSum(arr, 0, 3, 0, ans);

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }
  return 0;
}

// Subset Sums
// https://www.geeksforgeeks.org/problems/subset-sums2234/1

class Solution {
public:
  void allSum(vector<int> arr, int idx, int n, int sum, vector<int> &ans) {
    if (idx == n) {
      ans.push_back(sum);
      return;
    }
    allSum(arr, idx + 1, n, sum, ans);
    allSum(arr, idx + 1, n, sum + arr[idx], ans);
  }

  vector<int> subsetSums(vector<int> &arr) {
    // code here
    vector<int> ans;
    int sum = 0;
    allSum(arr, 0, arr.size(), sum, ans);
    return ans;
  }
};
