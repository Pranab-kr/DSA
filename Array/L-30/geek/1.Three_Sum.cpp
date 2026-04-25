class Solution {
public:
  bool hasTripletSum(vector<int> &arr, int target) {
    // Code Here
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
      int ans = target - arr[i];
      int st = i + 1, end = n - 1;

      while (st < end) {
        if (arr[st] + arr[end] == ans)
          return true;
        else if (arr[st] + arr[end] > ans)
          end--;
        else
          st++;
      }
    }
    return false;
    // TC-> O(n^2) , SC -> O(1)
  }
};

// Triplet Sum in Array
// Given an array arr[] and an integer target, determine if there exists a
// triplet in the array whose sum equals the given target.
//
// Return true if such a triplet exists, otherwise, return false.
//
// Examples:
//
// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
// Output: true
// Explanation: The triplet {1, 4, 8} sums up to 13.
