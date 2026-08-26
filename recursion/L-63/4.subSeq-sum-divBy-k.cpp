// Check Subset sum divisible by k
// https://www.geeksforgeeks.org/problems/subset-with-sum-divisible-by-m2546/1
//
// TLE Err
//
class Solution {
public:
  bool subSeq(vector<int> arr, int idx, int sum, int k) {
    if (idx == arr.size())
      return sum != 0 && sum % k == 0; // non-empty subset check also

    return subSeq(arr, idx + 1, sum, k) ||
           subSeq(arr, idx + 1, sum + arr[idx], k);
  }

  bool divisibleByK(vector<int> &arr, int k) {
    // code here

    return subSeq(arr, 0, 0, k);
  }
};
