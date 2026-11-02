// Next Smaller Element
// https://www.naukri.com/code360/problems/next-smaller-element_1112581?leftPanelTabValue=SUBMISSION
#include <stack>
#include <vector>

vector<int> nextSmallerElement(vector<int> &arr, int n) {
  stack<int> st;
  vector<int> ans(n, -1);

  for (int i = 0; i < n; i++) {
    while (!st.empty() && arr[st.top()] > arr[i]) {
      ans[st.top()] = arr[i];
      st.pop();
    }

    st.push(i);
  }

  return ans;
}
