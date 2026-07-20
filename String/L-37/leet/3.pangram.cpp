// 1832. Check if the Sentence Is Pangram
// https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/
//
// TC -> O(n) , SC -> O(1)

class Solution {
public:
  bool checkIfPangram(string sentence) {

    vector<int> alpha(26, 0);

    for (int i = 0; i < sentence.size(); i++) {
      int idx = sentence[i] - 'a';

      alpha[idx] = 1;
    }

    for (int i = 0; i < alpha.size(); i++) {
      if (alpha[i] == 0)
        return false;
    }
    return true;
  }
};
