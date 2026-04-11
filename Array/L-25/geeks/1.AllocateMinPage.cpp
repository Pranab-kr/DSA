class Solution {
public:
  int findPages(vector<int> &arr, int k) {
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
      int page = 0, count = 1;

      for (int i = 0; i < n; i++) {
        page += arr[i];
        if (page > mid) {
          count++;
          page = arr[i];
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

// Given an array arr[] of integers, where each element arr[i] represents the
// number of pages in the i-th book. You also have an integer k representing the
// number of students. The task is to allocate books to each student such that:
//
// Each student receives atleast one book.
// Each student is assigned a contiguous sequence of books.
// No book is assigned to more than one student.
// All books must be allocated.
// The objective is to minimize the maximum number of pages assigned to any
// student. In other words, out of all possible allocations, find the
// arrangement where the student who receives the most pages still has the
// smallest possible maximum.
//
// Note: If it is not possible to allocate books to all students, return -1.
//
// Examples:
//
// Input: arr[] = [12, 34, 67, 90], k = 2
// Output: 113
// Explanation: Allocation can be done in following ways:
// => [12] and [34, 67, 90] Maximum Pages = 191
// => [12, 34] and [67, 90] Maximum Pages = 157
// => [12, 34, 67] and [90] Maximum Pages = 113.
// The third combination has the minimum pages assigned to a student which is
// 113
