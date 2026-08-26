// 46. Permutations
// https://leetcode.com/problems/permutations/description/
//
// TC -> (n * n!) , SC -> O(n)

class Solution {
public:
  void findPer(vector<int> &arr, vector<vector<int>> &ans, vector<int> &tmp,
               vector<bool> &used) {
    if (arr.size() == tmp.size()) {
      ans.push_back(tmp);
      return;
    }

    for (int i = 0; i < arr.size(); i++) {
      if (used[i] == 0) {
        used[i] = 1;

        tmp.push_back(arr[i]);
        findPer(arr, ans, tmp, used);

        used[i] = 0;
        tmp.pop_back();
      }
    }
  }

  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> tmp;
    vector<bool> used(nums.size(), 0);
    findPer(nums, ans, tmp, used);

    return ans;
  }
};

// without tmp , used vector
class Solution {
public:
  void findPer(vector<int> &arr, vector<vector<int>> &ans, int idx) {
    if (idx == arr.size()) {
      ans.push_back(arr);
      return;
    }

    for (int i = idx; i < arr.size(); i++) {
      swap(arr[idx], arr[i]);
      findPer(arr, ans, idx + 1);

      swap(arr[idx], arr[i]); // put ele the same original postion after one
                              // full lavel is comp.. (Backtracking)
    }
  }

  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> ans;
    findPer(nums, ans, 0);

    return ans;
  }
};
