// Binary Numbers with More 1s in All Prefixes
// https://www.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

// TC -> O(2^n), SC -> O(n)

class Solution {
public:
  void findAns(int n, string &tmp, vector<string> &ans, int o, int z) {
    if (tmp.size() == n) {
      ans.push_back(tmp);
      return;
    }

    tmp.push_back('1');
    findAns(n, tmp, ans, o + 1, z);
    tmp.pop_back();

    // checking before adding 0 cause if the 0 and 1 are same in tmp,if
    // condition z<=o then the next prefix gonna have less 1 than 0 , so check
    // z<o
    if (z < o) {
      tmp.push_back('0');
      findAns(n, tmp, ans, o, z + 1);
      tmp.pop_back();
    }
  }

  vector<string> nBitBinary(int n) {
    string tmp;
    vector<string> ans;

    findAns(n, tmp, ans, 0, 0);

    return ans;
  }
};
