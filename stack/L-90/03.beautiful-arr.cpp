// Make Array Beautiful
// https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1
// Time Complexity: O(n)
// Auxiliary Space: O(n)
//
class Solution {
public:
  vector<int> makeBeautiful(vector<int> arr) {
    // code here
    stack<int> st;

    for (int i = 0; i < arr.size(); i++) {
      if (st.empty()) { // if stack empty push
        st.push(arr[i]);
      } else if (arr[i] < 0 && st.top() < 0) // if both -ve then push to stack
      {
        st.push(arr[i]);
      } else if (arr[i] >= 0 &&
                 st.top() >= 0) { // if both +ve then push to stack
        st.push(arr[i]);
      } else { // if both not -ve or +ve then pop from stack
        st.pop();
      }
    }

    vector<int> ans(st.size());
    int i = st.size() - 1;

    while (!st.empty()) {
      ans[i] = st.top();
      i--;
      st.pop();
    }

    return ans;
  }
};
