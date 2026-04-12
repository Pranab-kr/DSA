class Solution {
public:
  int aggressiveCows(vector<int> &stalls, int k) {
    // code here
    int n = stalls.size();
    if (n < k)
      return -1;
    int st = 1, end, mid, ans;
    sort(stalls.begin(), stalls.end());
    end = stalls[n - 1] - stalls[0];

    while (st <= end) {
      mid = st + (end - st) / 2;
      int pos = stalls[0], count = 1;

      for (int i = 1; i < n; i++) {
        if (pos + mid <= stalls[i]) {
          count++;
          pos = stalls[i];
        }
      }

      if (count < k)
        end = mid - 1;
      else {
        ans = mid;
        st = mid + 1;
      }
    }
    return ans;
  }
};
// You are given an array with unique elements of stalls[], which denote the
// positions of stalls. You are also given an integer k which denotes the number
// of aggressive cows. The task is to assign stalls to k cows such that the
// minimum distance between any two of them is the maximum possible.
//
// Examples:
//
// Input: stalls[] = [1, 2, 4, 8, 9], k = 3
// Output: 3
// Explanation: The first cow can be placed at stalls[0],
// the second cow can be placed at stalls[2] and
// the third cow can be placed at stalls[3].
// The minimum distance between cows in this case is 3, which is the largest
// among all possible ways.
