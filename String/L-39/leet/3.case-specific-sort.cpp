// Case-specific Sorting of Strings
// https://www.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1?page=2&difficulty
//
// TC -> O(n) , SC -> O(n)

class Solution {
public:
  string caseSort(string &s) {
    // code here
    vector<int> upper(26, 0);
    vector<int> lower(26, 0);

    for (int i = 0; i < s.size(); i++) {
      if ('A' <= s[i] && s[i] <= 'Z') {
        upper[s[i] - 'A']++;
        s[i] = '$';
      } else {
        lower[s[i] - 'a']++;

        s[i] = '#';
      }
    }

    string upp, low;
    for (int i = 0; i < 26; i++) {
      while (upper[i]) {
        upp += (i + 'A');
        upper[i]--;
      }
      while (lower[i]) {
        low += (i + 'a');
        lower[i]--;
      }
    }
    // string low;
    // for(int i = 0; i< lower.size(); i++){
    //     while(lower[i]){
    //         low += (i + 'a');
    //         lower[i]--;
    //     }
    // }

    int uppIdx = 0, lowIdx = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '$') {
        s[i] = upp[uppIdx];
        uppIdx++;
      } else if (s[i] == '#') {
        s[i] = low[lowIdx];
        lowIdx++;
      }
    }
    return s;
  }
};
