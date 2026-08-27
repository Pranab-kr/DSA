// 47. Permutations II
// https://leetcode.com/problems/permutations-ii/description/

class Solution {
public:
  void findPer(vector<int> &arr, vector<vector<int>> &ans, int idx) {
    if (idx == arr.size()) {
      ans.push_back(arr);
      return;
    }

    vector<bool> used(21, 0);

    for (int i = idx; i < arr.size(); i++) {

      if (used[arr[i] + 10] == 0) {
        used[arr[i] + 10] = 1;

        swap(arr[i], arr[idx]);
        findPer(arr, ans, idx + 1);
        swap(arr[i], arr[idx]);
      }
    }
  }

  vector<vector<int>> permuteUnique(vector<int> &nums) {
    vector<vector<int>> ans;
    findPer(nums, ans, 0);

    return ans;
  }
};
