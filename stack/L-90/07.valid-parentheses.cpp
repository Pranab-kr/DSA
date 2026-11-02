// 20. Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/description/
// TC->O(N), SC-> O(N)
// mine sol
class Solution {
public:
  bool isValid(string s) {
    stack<char> st;
    st.push('#'); // tohandl the first ')' '}' ']'

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == ')' && st.top() == '(')
        st.pop();
      else if (s[i] == '}' && st.top() == '{')
        st.pop();
      else if (s[i] == ']' && st.top() == '[')
        st.pop();
      else
        st.push(s[i]);
    }

    st.pop();
    return st.empty();
  }
};
