// 912. Sort an Array, test case failed
// https://leetcode.com/problems/sort-an-array/description/

// avg TC -> O(nlogn), avf sc -> O(logn)

class Solution {
public:
  int partition(vector<int> &arr, int st, int end) {
    int pos = st;

    for (int i = st; i <= end; i++) {
      if (arr[i] <= arr[end]) {
        swap(arr[i], arr[pos]);
        pos++;
      }
    }
    return pos - 1;
  }

  void quicksort(vector<int> &arr, int st, int end) {
    if (st >= end)
      return;

    int pivot = partition(arr, st, end);

    quicksort(arr, st, pivot - 1);
    quicksort(arr, pivot + 1, end);
  }

  vector<int> sortArray(vector<int> &nums) {
    quicksort(nums, 0, nums.size() - 1);
    return nums;
  }
};
