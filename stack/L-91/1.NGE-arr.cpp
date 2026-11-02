// Next Greater Element
// https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
// Time Complexity: O(n)
// Auxiliary Space: O(n)

class Solution {
public:
  vector<int> nextLargerElement(vector<int> &arr) {
    // code here
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++) {
      while (!st.empty() && arr[st.top()] < arr[i]) {
        ans[st.top()] = arr[i];
        st.pop();
      }
      st.push(i);
    }
    return ans;
  }
};
