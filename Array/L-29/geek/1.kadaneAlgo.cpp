class Solution {
public:
  int maxSubarraySum(vector<int> &arr) {
    // Code here
    long long maxi = INT_MIN, n = arr.size(), prefix = 0;
    for (int i = 0; i < n; i++) {
      prefix += arr[i];
      maxi = max(maxi, prefix);
      if (prefix < 0)
        prefix = 0;
    }
    return maxi;
  }
};

// Kadane's Algorithm
//
// You are given an integer array arr[]. You need to find the maximum sum of a
// subarray (containing at least one element) in the array arr[].
//
// Note : A subarray is a continuous part of an array.
//
// Examples:
//
// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.
