class Solution {
public:
  int search(vector<int> &arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (arr[mid] == target)
        return mid;
      else if (arr[mid] >= arr[0]) {
        if (arr[start] <= target && arr[mid] >= target)
          end = mid - 1;
        else
          start = mid + 1;
      } else {
        if (arr[mid] <= target && arr[end] >= target)
          start = mid + 1;
        else
          end = mid - 1;
      }
    }
    return -1;
  }
};

// 33. Search in Rotated Sorted Array

// Given the array nums after the possible rotation and an integer target,
// return the index of target if it is in nums, or -1 if it is not in nums.
//
// You must write an algorithm with O(log n) runtime complexity.
//
// Example 1:
//
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:
//
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
