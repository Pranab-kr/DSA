class Solution {
public:
  int minEatingSpeed(vector<int> &piles, int h) {

    int st = 0, end = 0, mid, ans, n = piles.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += piles[i];
      end = max(end, piles[i]);
    }
    st = sum / h;
    if (!st)
      st = 1;

    while (st <= end) {
      mid = st + (end - st) / 2;

      int total_time = 0;
      for (int i = 0; i < n; i++) {
        total_time += piles[i] / mid;
        int rem = piles[i] % mid;

        if (rem)
          total_time++;
      }

      if (total_time > h)
        st = mid + 1;
      else {
        ans = mid;
        end = mid - 1;
      }
    }
    return ans;
  }
};
// Koko loves to eat bananas. There are n piles of bananas, the ith pile has
// piles[i] bananas. The guards have gone and will come back in h hours.
//
// Koko can decide her bananas-per-hour eating speed of k. Each hour, she
// chooses some pile of bananas and eats k bananas from that pile. If the pile
// has less than k bananas, she eats all of them instead and will not eat any
// more bananas during this hour.
//
// Koko likes to eat slowly but still wants to finish eating all the bananas
// before the guards return.
//
// Return the minimum integer k such that she can eat all the bananas within h
// hours.
//
//
//
// Example 1:
//
// Input: piles = [3,6,7,11], h = 8
// Output: 4
