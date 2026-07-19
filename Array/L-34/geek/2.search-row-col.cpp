// Search in a Row-Column Sorted
// https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1
//
// TC -> O(n+m) , sc -> O(1)

class Solution {
public:
  bool matSearch(vector<vector<int>> &arr, int x) {
    // code here
    int row = arr.size(), col = arr[0].size();

    int i = 0, j = col - 1;

    while (i < row && j >= 0) {
      if (arr[i][j] == x)
        return true;
      else if (arr[i][j] < x)
        i++;
      else
        j--;
    }
    return false;
  }
};
