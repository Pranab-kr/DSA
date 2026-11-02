// Remove Two Consecutive Same
// https://www.geeksforgeeks.org/problems/string-manipulation3706/1
// Time Complexity: O(n)
// Auxiliary Space: O(n)

class Solution {
public:
  int removeConsecutiveSame(vector<string> &arr) {
    // code here
    stack<string> st;

    for (int i = 0; i < arr.size(); i++) {
      if (st.empty())
        st.push(arr[i]);
      else if (arr[i] != st.top())
        st.push(arr[i]);
      else
        st.pop();
    }

    return st.size();
  }
};
