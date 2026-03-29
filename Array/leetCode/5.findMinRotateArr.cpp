class Solution {
public:
  int findMin(vector<int> &nums) {
    int n = nums.size();
    int ans = nums[0], start = 0, end = n - 1;

    while (start <= end) {
      int mid = start + (end - start) / 2;

      if (nums[mid] >= nums[0])
        start = mid + 1;
      else {
        ans = nums[mid];
        end = mid - 1;
      }
    }
    return ans;
  }
};

// Suppose an array of length n sorted in ascending order is rotated between 1
// and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
//
// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
//
// Example 1:
//
// Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.
// Example 2:

// Input: nums = [4,5,6,7,0,1,2]
// Output: 0
// Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4
// times.
