
// probelm :
// https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
//
// TC -> O(n^2)
// SC -> O(1)

class Solution {
public:
  void rotateMatrix(vector<vector<int>> &mat) {
    // code here
    int row = mat.size(), col = mat[0].size();

    // traspose matrix
    for (int i = 0; i < row; i++) {
      for (int j = i + 1; j < col; j++) {
        swap(mat[i][j], mat[j][i]);
      }
    }

    // reverse col wise using two pounters
    for (int i = 0; i < row; i++) {
      int st = 0, end = row - 1;

      while (st < end) {
        swap(mat[st][i], mat[end][i]);
        st++, end--;
      }
    }
  }
};
