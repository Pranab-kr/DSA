class Solution {
public:
  int shipWithinDays(vector<int> &weights, int days) {
    int n = weights.size();
    if (n < days)
      return -1;

    int st = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++) {
      st = max(st, weights[i]);
      end += weights[i];
    }

    while (st <= end) {
      mid = st + (end - st) / 2;
      int capacity = 0, count = 1;
      for (int i = 0; i < n; i++) {
        capacity += weights[i];

        if (capacity > mid) {
          count++;
          capacity = weights[i];
        }
      }
      if (count <= days) {
        ans = mid;
        end = mid - 1;
      } else
        st = mid + 1;
    }

    return ans;
  }
};
// 1011. Capacity To Ship Packages Within D Days
