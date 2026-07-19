// 74. Search a 2D Matrix
// https://leetcode.com/problems/search-a-2d-matrix/description/

// Method 1: TC -> O(N+log(M)) , SC -> O(1);
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int row = matrix.size(), col = matrix[0].size();

    for (int i = 0; i < row; i++) {
      if (matrix[i][0] <= target && matrix[i][col - 1] >= target) {
        int st = 0, end = col - 1;

        while (st <= end) {
          int mid = (st + end) / 2;

          if (matrix[i][mid] == target)
            return true;
          else if (matrix[i][mid] < target)
            st = mid + 1;
          else
            end = mid - 1;
        }
      }
    }
    return false;
  }
};

// Method 2: TC -> O(log(n*m)), sc -> O(1)
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int row = matrix.size(), col = matrix[0].size();

    int st = 0, end = row * col - 1;

    while (st <= end) {
      int mid = (st + end) / 2;

      int i = mid / col, j = mid % col;

      if (matrix[i][j] == target)
        return true;
      else if (matrix[i][j] < target)
        st = mid + 1;
      else
        end = mid - 1;
    }
    return false;
  }
};
