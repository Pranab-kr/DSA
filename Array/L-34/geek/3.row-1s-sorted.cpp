// Row with Max 1s in Rowwise Sorted
// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1
//
// TC -> O(n+m), SC -> O(1)

class Solution {
public:
  int rowWithMax1s(vector<vector<int>> &arr) {
    // code here
    int row = arr.size(), col = arr[0].size();

    int i = 0, j = col - 1;

    int ans = -1;
    while (i < row && j >= 0) {
      if (arr[i][j] == 1) {
        ans = i;
        j--;
      } else
        i++;
    }

    return ans;
  }
};
