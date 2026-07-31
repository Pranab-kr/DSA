// Search Pattern
// https://www.geeksforgeeks.org/problems/search-pattern0205/1
//

// Time Complexity
// Building the LPS array: O(m) (m = pat.size())
// Searching in the text: O(n) (n = txt.size())
//
// Total: O(n+m)
//
// Time: O(n + m)
// Auxiliary Space: O(m)

class Solution {
public:
  vector<int> search(string &pat, string &txt) {
    // code here
    vector<int> lps(pat.size(), 0);
    findlps(lps, pat);
    vector<int> ans;

    int first = 0, second = 0;
    while (second < pat.size() && first < txt.size()) {

      if (txt[first] == pat[second]) // if hay & nee char are the same
        first++, second++;
      else {
        if (second == 0) // if the pos reach at the st
          first++;
        else
          second = lps[second - 1]; // move the second pos of the needle
      }
      if (second == pat.size()) {
        ans.push_back(first - second);
        second = lps[second - 1];
      }
    }

    return ans;
  }

  void findlps(vector<int> &lps, string needle) {
    int pre = 0, suff = 1;

    while (suff < needle.size()) {
      if (needle[pre] == needle[suff]) {
        lps[suff] = pre + 1;
        pre++, suff++;
      } else {
        if (pre == 0) {
          lps[suff] = 0;
          suff++;
        } else
          pre = lps[pre - 1];
      }
    }
  }
};
