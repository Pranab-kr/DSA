// 1859. Sorting the Sentence
// https://leetcode.com/problems/sorting-the-sentence/
//
// TC -> O(n), SC -> O(1)

class Solution {
public:
  string sortSentence(string s) {

    vector<string> order(10); // to store the order of the word and word in pos

    string temp;

    int count = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == ' ') {
        int idx = temp[temp.size() - 1] - '0';
        temp.pop_back();
        order[idx] = temp;
        temp.clear();
        count++;
      } else
        temp += s[i];
    }

    // handle the last word cause it not handle inloop cause of no empty space
    int idx = temp.back() - '0';
    temp.pop_back();
    order[idx] = temp;
    count++;

    string ans;

    for (int i = 1; i <= count; i++) {

      if (i > 1)
        ans += ' '; // to handle the space after word so no trail space created
      ans += order[i];
    }

    return ans;
  }
};
