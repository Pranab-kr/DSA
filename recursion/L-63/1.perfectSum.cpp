// Count Subsets with Sum
// https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1
//
// TC -> O(2^n) , SC -> O(n)

class Solution {
public:
  int allSum(vector<int> arr, int idx, int n, int tar) {
    if (idx == n)
      return tar == 0;

    if (tar < 0)
      return 0;

    return allSum(arr, idx + 1, n, tar) +
           allSum(arr, idx + 1, n, tar - arr[idx]);
  }

  int perfectSum(vector<int> &arr, int target) {

    return allSum(arr, 0, arr.size(), target);
  }
};
