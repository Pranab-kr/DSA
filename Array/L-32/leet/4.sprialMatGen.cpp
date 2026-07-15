class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {

    vector<vector<int>> ans(n, vector<int>(n));
    int top = 0, right = n - 1, bot = n - 1, left = 0;
    int num = 1;
    while (top <= bot && left <= right) {

      // top row print
      for (int i = left; i <= right; i++) {
        ans[top][i] = num++;
      }
      top++;

      // right side col-wise print
      for (int j = top; j <= bot; j++) {
        ans[j][right] = num++;
      }
      right--;

      // handle edge case (when the top became greter then bot) measn bot
      // alreaady printed
      if (top <= bot) {

        // bot row
        for (int k = right; k >= left; k--)
          ans[bot][k] = num++;
      }
      bot--;

      // handle edge case (when the left became greter then right) measn left
      // already printed
      if (left <= right) {

        // left side bot to top print
        for (int l = bot; l >= top; l--)
          ans[l][left] = num++;
      }
      left++;
    }
    return ans;
  }
};

// Given a positive integer n,
//     generate an n x n matrix filled with elements from 1 to n2 in spiral
//     order.
//
//     Example 1 :
//
//     Input : n = 3 Output : [ [ 1, 2, 3 ], [ 8, 9, 4 ], [ 7, 6, 5 ] ]
