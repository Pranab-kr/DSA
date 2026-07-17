// Rotate matrix 90%

#include <iostream>
#include <utility>
using namespace std;

int main() {

  int mat[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

  int row = 4, col = 4;

  // transpose matrix
  for (int i = 0; i < row; i++) {
    for (int j = i + 1; j < col; j++) {
      swap(mat[i][j], mat[j][i]);
    }
  }

  for (int i = 0; i < row; i++) {
    int st = 0, end = row - 1;

    // reverce each row using two pointers
    while (st < end) {
      swap(mat[i][st], mat[i][end]);
      st++;
      end--;
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

// TC -> O(n^2)
// SC -> O(1)
//
//
// leet sol
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//
//         int row = matrix.size(), col = matrix[0].size();
//
//         // transpose matrix
//         for (int i = 0; i < row; i++) {
//             for (int j = i + 1; j < col; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//
//         for (int i = 0; i < row; i++) {
//         int st = 0, end = row - 1;
//
//     // reverce each row using two pointers
//         while (st < end) {
//         swap(matrix[i][st], matrix[i][end]);
//         st++;
//         end--;
//         }
//   }
// https://leetcode.com/problems/rotate-image/
