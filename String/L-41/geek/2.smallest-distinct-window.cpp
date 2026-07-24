// Smallest distinct window
// https://www.geeksforgeeks.org/problems/smallest-distant-window3132/1?page=1&difficulty
//
// TC -> O(n), SC -> O(1)

class Solution {
public:
  int findSubString(string &str) {

    vector<int> count(256, 0);
    int first = 0, second = 0;
    int len = str.size();
    int diff = 0;

    // Count total distinct characters
    while (first < str.size()) {
      if (count[str[first]] == 0)
        diff++;
      count[str[first]]++;
      first++;
    }

    fill(count.begin(), count.end(), 0);
    first = 0;

    while (second < str.size()) {

      if (count[str[second]] == 0)
        diff--;

      count[str[second]]++;
      second++;

      while (diff == 0) {
        len = min(len, second - first);

        count[str[first]]--;
        if (count[str[first]] == 0)
          diff++;

        first++;
      }
    }

    return len;
  }
};
