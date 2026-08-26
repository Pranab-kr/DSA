// Count Subsequences Divisible by n
// https://www.geeksforgeeks.org/problems/number-of-subsequences-in-a-string-divisible-by-n5947/1
// TLE err

class Solution {
public:
  const int MOD = 1e9 + 7;

  int subSeq(string &s, int idx, int rem, int n) {
    if (idx == s.size()) {
      return rem == 0;
    }

    // Don't take s[idx]
    int notTake = subSeq(s, idx + 1, rem, n);

    // Take s[idx]
    int newRem = (rem * 10 + (s[idx] - '0')) % n;
    int take = subSeq(s, idx + 1, newRem, n);

    return (take + notTake) % MOD;
  }

  int countSubsequences(string s, int n) {
    // This counts the empty subsequence too
    int ans = subSeq(s, 0, 0, n);

    // Remove empty subsequence
    return (ans - 1 + MOD) % MOD;
  }
};
