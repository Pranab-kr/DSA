// Rotate Each Row of Matrix K Times
// https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1
//
// TC -> O(n*m) , SC -> O(n * m)

class Solution {
public:
  vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
    // code here
    int r = mat.size(), c = mat[0].size();

    vector<vector<int>> ans(r, vector<int>(c));

    k %= c;

    for (int i = 0; i < r; i++) {

      for (int j = 0; j < c; j++) {

        int newCol = (j - k + c) % c;
        ans[i][newCol] = mat[i][j];
      }
    }

    return ans;
  }
};
