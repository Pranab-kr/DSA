// Rat in a Maze
// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
//
// TC -> O(3^n^2), SC -> O(n^2)

class Solution {
public:
  int row[4] = {1, 0, 0, -1};
  int col[4] = {0, -1, 1, 0};
  string dir = "DLRU";

  bool valid(int i, int j, int n) { return i >= 0 && j >= 0 && i < n && j < n; }

  void totalWays(vector<vector<int>> &mat, int i, int j, int n,
                 vector<string> &ans, string path,
                 vector<vector<bool>> &visited) {
    if (i == n - 1 && j == n - 1) {
      ans.push_back(path);
      return;
    }

    visited[i][j] = 1;
    for (int k = 0; k < 4; k++) {
      if (valid(i + row[k], j + col[k], n) && mat[i + row[k]][j + col[k]] &&
          !visited[i + row[k]][j + col[k]]) {
        path.push_back(dir[k]);
        totalWays(mat, i + row[k], j + col[k], n, ans, path, visited);
        path.pop_back();
      }
    }
    visited[i][j] = 0;
  }

  vector<string> ratInMaze(vector<vector<int>> &maze) {
    // code here
    vector<string> ans;
    string path;
    int n = maze.size();

    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
      return ans;

    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    totalWays(maze, 0, 0, n, ans, path, visited);

    return ans;
  }
};
