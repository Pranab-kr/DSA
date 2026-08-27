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

    vector<bool> dupChk(26, false);

    for (int i = 0; i < s.size(); i++) {
      // Skip duplicate and used choices at this level
      if (dupChk[s[i] - 'A'] || used[i])
        continue;

      used[i] = true;
      dupChk[s[i] - 'A'] = true;
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

// swap Method
class Solution {
public:
  void findPer(string &s, vector<string> &ans, int idx) {
    if (idx == s.size()) {
      ans.push_back(s);
      return;
    }

    vector<bool> used(26, false);

    for (int i = idx; i < s.size(); i++) {

      // Have we already chosen this character
      // for position idx?
      if (used[s[i] - 'A'])
        continue;

      used[s[i] - 'A'] = true;

      swap(s[i], s[idx]);
      findPer(s, ans, idx + 1);
      swap(s[i], s[idx]);
    }
  }

  vector<string> findPermutation(string &s) {
    vector<string> ans;

    findPer(s, ans, 0);

    return ans;
  }
};
