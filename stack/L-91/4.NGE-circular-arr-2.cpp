// Next Greater in Circular Array
// https://www.geeksforgeeks.org/problems/next-greater-element/1
// Time Complexity: O(n)
// Auxiliary Space: O(n)

class Solution {
public:
  vector<int> nextGreater(vector<int> &arr) {
    // code here
    stack<int> st;
    vector<int> ans(arr.size(), -1);
    int n = arr.size();

    for (int i = 0; i < 2 * n; i++) {
      while (!st.empty() && arr[st.top()] < arr[i % n]) {
        ans[st.top()] = arr[i % n];
        st.pop();
      }

      if (i < n) // only push the remain ele idx on stack when looping the arr
        st.push(i);
    }
    return ans;
  }
};
