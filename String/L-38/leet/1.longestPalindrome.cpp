// 409. Longest Palindrome
// https://leetcode.com/problems/longest-palindrome/description/
//
// TC -> O(n), SC-> O(1)

class Solution {
public:
  int longestPalindrome(string s) {

    vector<int> lower(26, 0);
    vector<int> capital(26, 0);

    int n = s.size();

    for (int i = 0; i < n; i++) {
      if (s[i] >= 'a') // or | if (s[i] > 'Z')
        lower[s[i] - 'a']++;
      else
        capital[s[i] - 'A']++;
    }

    int ans = 0;
    bool isOdd = 0;

    for (int i = 0; i < 26; i++) {
      if (lower[i] % 2 == 0)
        ans += lower[i];
      else {
        isOdd = 1;
        ans += (lower[i] - 1);
      }

      if (capital[i] % 2 == 0)
        ans += capital[i];
      else {
        isOdd = 1;
        ans += (capital[i] - 1);
      }
    }

    return ans + isOdd;
  }
};
