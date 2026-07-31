// 214. Shortest Palindrome
// https://leetcode.com/problems/shortest-palindrome/description/
//
// TC -> O(n) , SC -> O(n)
class Solution {
public:
  string shortestPalindrome(string s) {
    string ori = s;

    string ans;
    string rev = s;
    reverse(rev.begin(), rev.end());

    string str = ori + '$' + rev;

    vector<int> lps(str.size(), 0);
    findlps(str, lps);

    // for(int i = lps.back(); i < s.size() ; i++ ){
    //     ans +=ori[i];
    // }

    // reverse(ans.begin() , ans.end());

    // Tiny optimization (directly iterate backwards)
    for (int i = ori.size() - 1; i >= lps.back(); i--)
      ans += ori[i];

    return ans + ori;
  }

  void findlps(string str, vector<int> &lps) {
    int pre = 0, suff = 1;

    while (suff < str.size()) {

      if (str[pre] == str[suff]) {
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
