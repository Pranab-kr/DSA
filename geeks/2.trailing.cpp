// User function Template for C++
class Solution {
public:
  int trailingZeroes(int n) {
    // Write Your Code here
    if (n == 5)
      return 1;
    int ans = 0;
    while (n >= 5) {
      n /= 5;
      ans += n;
    }
    return ans;
  }
};
