class Solution {
public:
  int minTime(vector<int> &arr, int k) {
    // code here
    int n = arr.size();

    if (n < k)
      return -1;

    int st = 0, end = 0, ans, mid;

    for (int i = 0; i < n; i++) {
      st = max(st, arr[i]);
      end += arr[i];
    }

    while (st <= end) {
      mid = st + (end - st) / 2;
      int time = 0, count = 1;

      for (int i = 0; i < n; i++) {
        time += arr[i];
        if (time > mid) {
          count++;
          time = arr[i];
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
