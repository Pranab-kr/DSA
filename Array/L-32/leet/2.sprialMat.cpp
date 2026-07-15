class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    int row = matrix.size(), col = matrix[0].size();
    vector<int> ans;
    int top = 0, right = col - 1, bot = row - 1, left = 0;

    while (top <= bot && left <= right) {

      // top row print
      for (int i = left; i <= right; i++) {
        ans.push_back(matrix[top][i]);
      }
      top++;

      // right side col-wise print
      for (int j = top; j <= bot; j++) {
        ans.push_back(matrix[j][right]);
      }
      right--;

      // handle edge case (when the top became greter then bot) measn bot
      // alreaady printed
      if (top <= bot) {

        // bot row
        for (int k = right; k >= left; k--)
          ans.push_back(matrix[bot][k]);
      }
      bot--;

      // handle edge case (when the left became greter then right) measn left
      // already printed
      if (left <= right) {

        // left side bot to top print
        for (int l = bot; l >= top; l--)
          ans.push_back(matrix[l][left]);
      }
      left++;
    }
    return ans;
  }
};

// 54. Spiral Matrix
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// https://leetcode.com/problems/spiral-matrix/description/
