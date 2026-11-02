// 921. Minimum Add to Make Parentheses Valid
// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/?source=submission-ac
// TC->O(N) , SC->O(N)

// my method
class Solution {
public:
  int minAddToMakeValid(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
      if (st.empty())
        st.push(s[i]);
      else if (s[i] == ')' && st.top() == '(')
        st.pop();
      else // handle both '(' and ')'
        st.push(s[i]);
    }
    return st.size();
  }
};

// coder army
class Solution {
public:
  int minAddToMakeValid(string s) {
    stack<char> st;
    int count = 0; // keep ')' count if no top '('
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(')
        st.push(s[i]);
      else {
        if (st.empty())
          count++;
        else
          st.pop(); // present '('
      }
    }
    return st.size() + count;
  }
};
