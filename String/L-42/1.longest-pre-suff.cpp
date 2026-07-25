// Longest Prefix Suffix
// https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1
//
// TC -> O(n) , SC -> O(n)
//
class Solution {
public:
  int getLPSLength(string &s) {
    // code here

    vector<int> lsp(s.size(),
                    0); // lsp vector to store the loggest prefix and suff val
    int pre = 0, suf = 1;

    while (suf < s.size()) {
      if (s[pre] == s[suf]) {
        lsp[suf] = pre + 1;
        pre++, suf++;
      } else {
        if (pre == 0) { // the pos of pre is idx 0
          lsp[suf] = 0;
          suf++;
        } else
          pre = lsp[pre - 1]; // check one ele before str lsp val and go to that
                              // pos and compare with suff in str
      }
    }

    return lsp[s.size() - 1]; // last pos val
  }
};
