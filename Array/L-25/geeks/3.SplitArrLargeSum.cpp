class Solution {
public:
  int splitArray(vector<int> &arr, int k) {
    // code here
    int n = arr.size();
    if (n < k)
      return -1;

    int st = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++) {
      st = max(st, arr[i]);
      end += arr[i];
    }

    while (st <= end) {
      int mid = st + (end - st) / 2;
      int sum = 0, count = 1;

      for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > mid) {
          count++;
          sum = arr[i];
        }
      }

      if (count <= k) {
        ans = mid;
        end = mid - 1;
      } else
        st = mid + 1;
    }

    return ans;
  }
};

// Split Array Largest Sum
// Given an array arr[] and an integer k, divide the array into k contiguous
// subarrays such that the maximum sum among these subarrays is minimized. Find
// this minimum possible maximum sum.
//
// Examples:
//
// Input: arr[] = [1, 2, 3, 4], k = 3
// Output: 4
// Explanation: Optimal Split is [1, 2], [3], [4]. Maximum sum of all subarrays
// is 4, which is minimum possible for 3 splits.
