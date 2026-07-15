class Solution {
public:
  vector<int> diagView(vector<vector<int>> mat) {
    // code here
    vector<int> ans;
    int row = mat.size(), col = mat[0].size();

    for (int i = 0; i < row; i++) {
      int r = 0;
      int c = i;
      while (r < row && c >= 0) {
        ans.push_back(mat[r][c]);
        r++;
        c--;
      }
    }

    for (int i = 1; i < row; i++) {
      int c = col - 1;
      int r = i;

      while (r < row && c >= 0) {
        ans.push_back(mat[r][c]);
        r++;
        c--;
      }
    }

    return ans;
  }
};

// Give a n * n square matrix mat[][], return all the elements of its
// anti-diagonals from top to bottom.
//
// Examples :
//
// Input: n = 2, mat[][] = [[1, 2],
//                         [3, 4]]
// Output: [1, 2, 3, 4]
// Explanation:
//
// Input: n = 3, mat[][] = [[1, 2, 3],
//                        [4, 5, 6],
//                        [7, 8, 9]]
// Output: [1, 2, 4, 3, 5, 7, 6, 8, 9]
