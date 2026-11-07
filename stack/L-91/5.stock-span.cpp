// Stock Span Problem
// https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
// Time Complexity: O(n)
// Auxiliary Space: O(n)

class Solution {
public:
  vector<int> calculateSpan(vector<int> &arr) {
    // code here
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n, 1);

    for (int i = n - 1; i >= 0; i--) {
      while (!st.empty() && arr[st.top()] < arr[i]) {
        ans[st.top()] = st.top() - i;
        st.pop();
      }
      st.push(i);
    }
    // clear remain stack ele idx , cause we those ele's are decreasing order on
    // left so we have to add the idx+1 for each stack ele to get ans eg.
    // [60,70,100] ans should be [1,2,3] but if we dont do it hen it became
    // [1,1,1] which is wrong
    while (!st.empty()) {
      ans[st.top()] = st.top() + 1;
      st.pop();
    }
    return ans;
  }
};
