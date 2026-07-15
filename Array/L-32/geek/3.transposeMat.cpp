class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>> &mat) {
    // code here
    int row = mat.size(), col = mat[0].size();

    for (int i = 0; i < row - 1; i++) {
      for (int j = i + 1; j < col; j++) {
        swap(mat[i][j], mat[j][i]);
      }
    }
    return mat;
  }
};
// Given a square matrix of size n x n, return the transpose matrix of the given
// matrix.
//
// The transpose of a matrix is obtained by converting all the rows to columns
// and all the columns to rows.
//
// Examples:
//
// Input: mat[][] = [[1, 1, 1, 1], [2, 2, 2, 2], [3, 3, 3, 3], [4, 4, 4, 4]]
// Output: [[1, 2, 3, 4], [1, 2, 3, 4], 1, 2, 3, 4], [1, 2, 3, 4]]
// Explanation: Converting rows into columns and columns into rows.
