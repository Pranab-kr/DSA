// problem:
// https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1
// TC -> O(n^2)
// SC -> o(1)

class Solution {
public:
  void rotateMatrix(vector<vector<int>> &mat) {
    // code here
    int row = mat.size(), col = mat[0].size();

    // reverse each col
    for (int i = 0; i < col; i++) {

      int st = 0, end = col - 1;

      while (st < end) {
        swap(mat[st][i], mat[end][i]);
        st++, end--;
      }
    }

    // reverse each row
    for (int i = 0; i < col; i++) {

      int st = 0, end = col - 1;

      while (st < end) {
        swap(mat[i][st], mat[i][end]);
        st++, end--;
      }
    }
  }
};

// method 2 using 90 deg 2 times
//  transpose matrix
//     for (int i = 0; i < row; i++) {
//         for (int j = i + 1; j < col; j++) {
//             swap(mat[i][j], mat[j][i]);
//     }
// }

//     for (int i = 0; i < row; i++) {
//     int st = 0, end = row - 1;

// // reverce each row using two pointers
//     while (st < end) {
//     swap(mat[i][st], mat[i][end]);
//     st++;
//     end--;
//     }
//     }

//      // transpose matrix
//     for (int i = 0; i < row; i++) {
//         for (int j = i + 1; j < col; j++) {
//             swap(mat[i][j], mat[j][i]);
//     }
// }

//     for (int i = 0; i < row; i++) {
//     int st = 0, end = row - 1;

// // reverce each row using two pointers
//     while (st < end) {
//     swap(mat[i][st], mat[i][end]);
//     st++;
//     end--;
//     }
