//
// Count zeros in a sorted matrix
// https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1
//
// TC-> O(n+m), sc->O(1)
//

class Solution {
public:
  int countZeros(vector<vector<int>> &mat) {
    // code here
    if (mat.empty())
      return 0;

    int row = mat.size(), col = mat[0].size();

    int i = 0, j = col - 1, count = 0;

    while (i < row && j >= 0) {
      if (mat[i][j] == 0) {
        count += (j + 1);
        i++;
      } else {
        j--;
      }
    }

    return count;
  }
};
