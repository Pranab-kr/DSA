class Solution {
public:
  int findKthPositive(vector<int> &arr, int k) {
    int n = arr.size();
    int st = 0, end = n - 1;

    while (st <= end) {
      int mid = st + (end - st) / 2;
      int miss = arr[mid] - (mid + 1);

      if (miss < k)
        st = mid + 1;
      else
        end = mid - 1;
    }

    if (st == 0)
      return k;

    int missing_before = arr[st - 1] - st;

    return arr[st - 1] + (k - missing_before);
  }
};
