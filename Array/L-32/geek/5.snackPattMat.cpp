class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();
        for(int i = 0 ; i < row ; i++ ){
            if(i % 2 == 0){ 
            for (int j= 0 ; j< col ; j++)
                ans.push_back(matrix[i][j]);
            }
            else{
                for ( int j = col - 1 ; j>= 0 ; j--)
                ans.push_back(matrix[i][j]);
            }
        }
        
        return ans;
    }
};

// Input: n = 3, mat[][] = [[45, 48, 54], [21, 89, 87], [70, 78, 15]]
// Output: [45, 48, 54, 87, 89, 21, 70, 78, 15] 
// Explanation: Printing it in snake pattern will lead to the output as [45, 48, 54, 87, 89, 21, 70, 78, 15.
// Input: n = 2, mat[][] = [[1, 2], [3, 4]]
// Output: [1, 2, 4, 3] 
// Explanation: Printing it in snake pattern will give output as [1, 2, 4, 3].
