// String Rotated by 2 Places
// https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

class Solution {
public:
  bool isRotated(string &s1, string &s2) {
    // code here

    if (s1.size() != s2.size())
      return false;

    string clockWise = s1, anti = s1;
    clockwise(clockWise);
    clockwise(clockWise);

    if (clockWise == s2)
      return true;

    anticlockwise(anti);
    anticlockwise(anti);

    if (anti == s2)
      return true;

    return false;
  }
  void clockwise(string &s1) {

    char last = s1[s1.size() - 1];

    for (int i = s1.size() - 1; i >= 1; i--) {
      s1[i] = s1[i - 1];
    }
    s1[0] = last;
  }

  void anticlockwise(string &s1) {

    char first = s1[0];
    for (int i = 0; i < s1.size() - 1; i++) {
      s1[i] = s1[i + 1];
    }
    s1[s1.size() - 1] = first;
  }
};
