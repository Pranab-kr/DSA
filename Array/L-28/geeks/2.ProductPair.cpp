class Solution {
public:
  bool isProduct(vector<int> arr, long long x) {
    sort(arr.begin(), arr.end());

    int st = 0, end = arr.size() - 1;

    while (st < end) {
      long long prod = 1LL * arr[st] * arr[end];

      if (prod == x)
        return true;
      else if (prod < x)
        st++;
      else
        end--;
    }

    return false;
  }
};
// Given an array arr[] of integers, and a number x, find if there is a pair in
// arr[] with a product equal to x. Return true if there exists such pair
// otherwise false.
//
// Examples:
//
// Input: arr[] = [10, 20, 9, 40], x = 400
// Output: true
// Explanation: As 10 * 40 = 400, the answer is true.
