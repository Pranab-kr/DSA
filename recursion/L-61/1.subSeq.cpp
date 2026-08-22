// 78. Subsets
// https://leetcode.com/problems/subsets/
// TC -> O(2^n), SC -> (n) excluding the ans arr and tmp pass as ref

class Solution {
public:
  void subSeq(vector<int> nums, int idx, int n, vector<vector<int>> &ans,
              vector<int> &temp) {
    if (idx == n) {
      ans.push_back(temp);
      return;
    }

    subSeq(nums, idx + 1, n, ans, temp);
    temp.push_back(nums[idx]);
    subSeq(nums, idx + 1, n, ans, temp);
    temp.pop_back();
  }

  vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> temp;

    subSeq(nums, 0, nums.size(), ans, temp);

    return ans;
  }
};
