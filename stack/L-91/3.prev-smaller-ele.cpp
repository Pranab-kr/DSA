// Previous Smaller Element
// https://www.geeksforgeeks.org/problems/previous-smaller-element/1
// Time Complexity: O(n)
// Auxiliary Space: O(n)

class Solution {
public:
  vector<int> prevSmaller(vector<int> &arr) {
    //  code here
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n, -1);

    for (int i = n - 1; i >= 0; i--) {
      while (!st.empty() && arr[st.top()] > arr[i]) {
        ans[st.top()] = arr[i];
        st.pop();
      }
      st.push(i);
    }
    return ans;
  }
};
