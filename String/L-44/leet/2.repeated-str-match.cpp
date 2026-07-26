// 686. Repeated String Match
// https://leetcode.com/problems/repeated-string-match/description/
//
// Time: O(n + m)
// Space: O(n + m) (including temp)
// Auxiliary Space: O(m) (excluding temp)

class Solution {
public:
  int repeatedStringMatch(string a, string b) {

    if (a == b)
      return 1;

    int rep = 1;
    string temp = a;

    while (b.size() > temp.size()) {
      temp += a;
      rep += 1;
    }

    if (checkstr(temp, b))
      return rep;

    temp += a;
    rep += 1;

    if (checkstr(temp, b))
      return rep;

    else
      return -1;
  }

  bool checkstr(string temp, string b) {
    vector<int> lps(b.size(), 0);

    findlps(lps, b);

    int first = 0, second = 0;

    while (second < b.size() && first < temp.size()) {
      if (b[second] == temp[first])
        second++, first++;
      else {
        if (second == 0)
          first++;
        else
          second = lps[second - 1];
      }
    }

    if (second == b.size())
      return 1;

    return 0;
  }

  void findlps(vector<int> &lps, string b) {
    int pre = 0, suff = 1;

    while (suff < b.size()) {
      if (b[pre] == b[suff]) {
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
