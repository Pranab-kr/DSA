// Frequencies in a Limited Array
// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
//
// TC -> O(n), SC -> O(1)

class Solution {
public:
  vector<int> frequencyCount(vector<int> &arr) {
    // code here
    int n = arr.size();

    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++)
      arr[i]--;

    // main work of finding repeate & missing
    for (int i = 0; i < n; i++) {

      int idx = arr[i] % n;

      arr[idx] += n;
    }

    // ans
    for (int i = 0; i < n; i++) {
      int feq = arr[i] / n;

      if (feq >= 1)
        ans[i] = feq;

      if (feq == 0)
        ans[i] = 0;
    }

    // simplified last loop
    // Because arr[i] / n is already the frequency (including 0).
    // for (int i = 0; i < n; i++)
    //     ans[i] = arr[i] / n;

    return ans;
  }
};
