// 28. Find the Index of the First Occurrence in a String
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
//
// TC -> O(n + m), SC -> O(m)

class Solution {
public:
  int strStr(string haystack, string needle) {
    vector<int> lps(needle.size(), 0);
    findlps(lps, needle);

    int first = 0, second = 0;
    while (second < needle.size() && first < haystack.size()) {

      if (haystack[first] == needle[second]) // if hay & nee char are the same
        first++, second++;
      else {
        if (second == 0) // if the pos reach at the st
          first++;
        else
          second = lps[second - 1]; // move the second pos of the needle
      }
    }

    if (second == needle.size())
      return first - second;

    return -1;
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
