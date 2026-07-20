// Sort a String
// https://www.geeksforgeeks.org/problems/sort-a-string2943/1
//
// TC -> O(n) , SC -> O(1)

class Solution {
public:
  string sortString(string &s) {
    // code here
    vector<int> alpha(26, 0);
    string ans;

    for (int i = 0; i < s.size(); i++) {
      int idx = s[i] - 'a';
      alpha[idx]++;
    }

    for (int i = 0; i < alpha.size(); i++) {
      if (alpha[i] != 0)

        while (alpha[i]--)
          ans.push_back(i + 'a');
    }
    return ans;
  }
};
