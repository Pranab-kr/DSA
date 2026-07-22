// 2785. Sort Vowels in a String
// https://leetcode.com/problems/sort-vowels-in-a-string/description/
//
// TC -> O(n), SC -> O(n)

class Solution {
public:
  string sortVowels(string s) {

    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
          s[i] == 'U') {
        upper[s[i] - 'A']++;
        s[i] = '#';
      }
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u') {
        lower[s[i] - 'a']++;
        s[i] = '#';
      }
    }

    string ans;
    for (int i = 0; i < upper.size(); i++) {
      while (upper[i]) {
        char c = i + 'A';
        ans += c;
        upper[i]--;
      }
    }

    for (int i = 0; i < lower.size(); i++) {
      while (lower[i]) {
        char c = i + 'a';
        ans += c;
        lower[i]--;
      }
    }

    int first = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '#') {
        s[i] = ans[first];
        first++;
      }
    }

    return s;
  }
};
