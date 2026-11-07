// 84. Largest Rectangle in Histogram
// https://leetcode.com/problems/largest-rectangle-in-histogram/description/

// TC: O(n)
// SC: O(n)

// Method 1: arr traver total 3 times, 1st for NSR, 2nd for NSL, 3rd for ans calculation
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> right(n, n); // assign the size and init val, so if the NSR not found default to size of heights arr
        vector<int> left(n,-1); // assign the size and init val (-1), so if the NSL not found default to -1 idx
        stack<int> st;

        // NSR (right side first small ele)
        for(int i = 0 ; i< n ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        // NSL (left arr idx assign)
        for(int i = n-1 ; i>= 0 ; i--){
            while(!st.empty() && heights[st.top()] > heights[i]){
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        int ans = 0;

        // ans calculation
        for(int i = 0 ; i< n ; i++)
            ans = max(ans, heights[i] * (right[i] - left[i] - 1));

        return ans;
    }
};

// Method 2: arr traver total 1 time, using stack to store the idx of heights arr
// TC : O(n) , SC : O(n)

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int ans = 0;
        
        for(int i = 0; i<n ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int idx = st.top(); // store the curr idx
                st.pop(); // to get the NSL so we pop to get the prev smaller element

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
};