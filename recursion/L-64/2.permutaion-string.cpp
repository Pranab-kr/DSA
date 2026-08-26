// Distinct Permutations of a String
// https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

class Solution {
public:
  void findPer(string &s, vector<string> &ans, string &tmp,
               vector<bool> &used) {

    if (tmp.size() == s.size()) {
      ans.push_back(tmp);
      return;
    }

    for (int i = 0; i < s.size(); i++) {

      if (used[i])
        continue;

      // Skip duplicate choices at this level
      if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
        continue;

      used[i] = true;
      tmp.push_back(s[i]);

      findPer(s, ans, tmp, used);

      tmp.pop_back();
      used[i] = false;
    }
  }

  vector<string> findPermutation(string &s) {
    vector<string> ans;
    string tmp;
    vector<bool> used(s.size(), false);

    sort(s.begin(), s.end());

    findPer(s, ans, tmp, used);

    return ans;
  }
};
