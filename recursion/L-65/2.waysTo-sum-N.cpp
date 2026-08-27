// Coin Change (Count Ways)
// https://www.geeksforgeeks.org/problems/coin-change2448/1
// TLE err

// when order not matter
class Solution {
public:
  int ways(vector<int> &arr, int sum, int idx) {

    if (sum == 0)
      return 1;

    if (sum < 0 || idx == arr.size())
      return 0;

    return ways(arr, sum, idx + 1) + ways(arr, sum - arr[idx], idx);
  }

  int count(vector<int> &coins, int sum) {
    // code here
    return ways(coins, sum, 0);
  }
};

// when order matter means 1,1,5 and 5,1,1 not same
int ways(vector<int> &arr, int sum) {
  if (sum <= 0) {
    return sum == 0;
  }
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    ans += ways(arr, sum - arr[i]);
  }
  return ans;
}
