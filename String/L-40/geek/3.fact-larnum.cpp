// Factorials of large numbers
// https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1?page=1&category=Strings&difficulty=Medium&sortBy=submissions

class Solution {
public:
  vector<int> factorial(int n) {
    // code here
    vector<int> ans(1, 1);

    while (n > 1) {
      int carry = 0, res = 0, size = ans.size();

      for (int i = 0; i < size; i++) {
        res = ans[i] * n + carry;
        carry = res / 10;
        res %= 10;
        ans[i] = res;
      }
      while (carry) {
        ans.push_back(carry % 10);
        carry /= 10;
      }
      n--;
    }
    reverse(ans.begin(), ans.end());

    return ans;
  }
};
