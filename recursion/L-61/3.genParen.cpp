// 22. Generate Parentheses
// https://leetcode.com/problems/generate-parentheses/description/
// TC -> O(2^n) SC -> O(n) after excluding the ans arr

class Solution {
public:
  void genParen(int n, int left, int right, vector<string> &ans, string &tmp) {
    if (left + right == 2 * n) {
      ans.push_back(tmp);
      return;
    }
    // left paren
    if (left < n) {
      tmp.push_back('(');
      genParen(n, left + 1, right, ans, tmp);
      tmp.pop_back();
    }

    // right paren
    if (right < left) {
      tmp.push_back(')');
      genParen(n, left, right + 1, ans, tmp);
      tmp.pop_back();
    }
  }

  vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string tmp;

    genParen(n, 0, 0, ans, tmp);
    return ans;
  }
};
