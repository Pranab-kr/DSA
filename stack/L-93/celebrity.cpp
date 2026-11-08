// Celebrity Problem
// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

// TC : O(n) , SC : O(n) for stack

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        
        stack<int> st;
        int n = mat.size();
        
        for(int i = 0 ; i < n ; i++)
            st.push(i);
            
        while(st.size() > 1){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            
            if(mat[first][second] && !mat[second][first])
                st.push(second);
            
            else if(!mat[first][second] && mat[second][first])
                st.push(first);
        }
        
        if(st.empty()) // if no ele found so no celerity
            return -1;
            
        int idx = st.top(), row = 0 , col = 0;
        st.pop();
        
        // checking again at last if the found idx is really the celebrity
        for(int i = 0; i < n ; i++){
            if(i != idx){
            row += mat[idx][i]; // should be 0 after loop over
            col += mat[i][idx]; // should be n-1 after loop over 
            }
        }
        
        // return the idx of the celebrity by confirming again last
        return row == 0 && col== n-1 ? idx : -1;
    }
};