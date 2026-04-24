class Solution {
public:
  void segregate0and1(vector<int> &arr) {
    // code here
    int n = arr.size();
    int st = 0, end = n - 1;
    while (st < end) {
      if (arr[st] == 0)
        st++;
      else {
        if (arr[end] == 0) {
          swap(arr[st], arr[end]);
          st++;
          end--;
        } else
          end--;
      }
    }
  }
};

// Segregate 0s and 1s
// Difficulty: EasyAccuracy: 54.25%Submissions: 160K+Points: 2Average Time: 15m
// Given an array arr[] consisting of only 0's and 1's. Modify the array
// in-place to segregate 0s onto the left side and 1s onto the right side of the
// array.
//
// Examples :
//
// Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
// Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
// Explanation:  After segregation, all the 0's are on the left and 1's are on
// the right. Modified array will be [0, 0, 0, 0, 0, 1, 1, 1, 1, 1].
