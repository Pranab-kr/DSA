#include <iostream>
#include <vector>
using namespace std;

int main() {
  int k;
  cout << "Enter how many times rotate: ";
  cin >> k;

  vector<vector<int>> mat(3, vector<int>(3));

  mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  k %= 4;

  int row = mat.size();
  int col = mat[0].size();
  for (int t = 0; t < k; t++) {
    // transpose matrix
    for (int i = 0; i < row; i++) {
      for (int j = i + 1; j < col; j++) {
        swap(mat[i][j], mat[j][i]);
      }
    }

    for (int i = 0; i < col; i++) {
      int st = 0, end = col - 1;

      // reverce each row using two pointers
      while (st < end) {
        swap(mat[i][st], mat[i][end]);
        st++, end--;
      }
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
