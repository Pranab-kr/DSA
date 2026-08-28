// 40. Combination Sum II
// https://leetcode.com/problems/combination-sum-ii/description/
//
// TC -> O(n*n!) , SC -> O(n)

class Solution {
public:
  void findSol(vector<int> &candidates, int idx, vector<int> &tmp,
               vector<vector<int>> &ans, int target) {

    if (target == 0) {
      ans.push_back(tmp);
      return;
    }

    if (target < 0 || idx == candidates.size())
      return;

    for (int i = idx; i < candidates.size(); i++) {

      // Skip duplicate choices at the same level
      if (i > idx && candidates[i] == candidates[i - 1])
        continue;

      tmp.push_back(candidates[i]);

      // i + 1 because each element can be used only once
      findSol(candidates, i + 1, tmp, ans, target - candidates[i]);

      tmp.pop_back();
    }
  }

  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {

    vector<vector<int>> ans;
    vector<int> tmp;

    sort(candidates.begin(), candidates.end());

    findSol(candidates, 0, tmp, ans, target);

    return ans;
  }
};
