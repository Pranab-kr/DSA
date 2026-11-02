// Bracket Numbers
// https://www.geeksforgeeks.org/problems/print-bracket-number4058/1
// Time Complexity: O(|s|)
// Auxiliary Space: O(|s|)
//
class Solution {
public:
  vector<int> bracketNumbers(string &s) {
    // code here
    vector<int> ans;
    stack<int> st;
    int count = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        count++;
        st.push(count);
        ans.push_back(count);
      } else if (s[i] == ')') { // closing ( is less or equal to opening ), so
                                // no need to check the top is empty or not
        ans.push_back(st.top());
        st.pop();
      }
    }
    return ans;
  }
};
