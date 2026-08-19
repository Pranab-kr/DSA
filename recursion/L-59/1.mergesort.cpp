// 912. Sort an Array
// https://leetcode.com/problems/sort-an-array/
//
// TC -> O(nlogn) , SC -> O(n)

class Solution {
public:
  void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp(end - st + 1);
    int left = st, right = mid + 1, idx = 0;

    while (left <= mid && right <= end) {
      if (arr[left] <= arr[right]) {
        temp[idx] = arr[left];
        left++, idx++;
      } else {
        temp[idx] = arr[right];
        right++, idx++;
      }
    }

    // left remain eles
    while (left <= mid) {
      temp[idx] = arr[left];
      left++, idx++;
    }
    // right remain eles
    while (right <= end) {
      temp[idx] = arr[right];
      right++, idx++;
    }
    // reset idx for arr
    idx = 0;
    while (st <= end) {
      arr[st] = temp[idx];
      st++, idx++;
    }
  }

  void mergesort(vector<int> &arr, int st, int end) {
    if (st == end)
      return;

    int mid = st + (end - st) / 2;

    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, st, mid, end);
  }
  vector<int> sortArray(vector<int> &nums) {
    mergesort(nums, 0, nums.size() - 1);
    return nums;
  }
};
