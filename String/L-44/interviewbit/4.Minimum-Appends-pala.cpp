// Minimum Appends for Palindrome!
// https://www.interviewbit.com/problems/minimum-appends-for-palindrome/
//
//
// TC -> O(n), SC -> O(n)

int Solution::solve(string A) {
  reverse(A.begin(), A.end());
  string ori = A;

  string ans;
  string rev = A;
  reverse(rev.begin(), rev.end());

  string str = ori + '$' + rev;

  vector<int> lps(str.size(), 0);
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

  return A.size() - lps.back();
}
