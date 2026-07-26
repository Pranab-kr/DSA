// Min Chars to Add for Palindrome
// https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1?page=1&difficulty
//
// TC -> O(n) , SC -> O(n)

class Solution {
public:
  int minChar(string &s) {
    // code here
    string rev = s;
    reverse(rev.begin(), rev.end());

    string fullstr = s + '$' + rev;

    vector<int> lps(fullstr.size(), 0);

    findlps(lps, fullstr);

    return (s.size() - lps[fullstr.size() - 1]);
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
