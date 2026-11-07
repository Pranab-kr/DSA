// 85. Maximal Rectangle
// https://leetcode.com/problems/maximal-rectangle/description/

// TC : O(n*m) , SC : O(m)

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int ans = 0;
        
        for(int i = 0; i<n ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int idx = st.top(); // store the curr idx
                st.pop(); // to get the NSL so we pop to get the prev

                if(!st.empty())
                    ans = max(ans, heights[idx] * (i - st.top() - 1));
                else
                     ans = max(ans, heights[idx] * i);
            }
            st.push(i);
        }

        while(!st.empty()){
            int idx = st.top();
            st.pop();

            if(!st.empty())
                    ans = max(ans, heights[idx] * (n - st.top() - 1)); // n cause the NSR is not found when arr reach end so we take the size of the arr(heights)
                else
                     ans = max(ans, heights[idx] * n);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size() , col = matrix[0].size();
        vector<int> arr(col,0);
        int ans = 0;
        
        for(int i = 0 ; i< row; i++){
            for(int j = 0; j< col; j++){
                if(matrix[i][j] == '0')
                    arr[j] = 0;
                else
                    arr[j] +=1; 
            }

            ans = max(ans,largestRectangleArea(arr));
        }

        return ans;
    }
};