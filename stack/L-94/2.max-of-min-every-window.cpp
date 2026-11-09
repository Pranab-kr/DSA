// Max of Min for Every Window Size
// https://www.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1

// 1.Mehod 1: Brute Force (TLE)
// TC -> O(n^3) , SC -> O(1) auxiliary space

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        
        for(int i = 0 ; i< n ; i++){
            for(int j = 0; j < n - i; j++){
                int num = INT_MAX;
                
                for(int k = j ; k<j+i+1 ; k++)
                    num = min(num, arr[k]);
                
                ans[i] = max(num,ans[i]);
                
            } 
        }
        return ans;
    }
};

// 2. Method 2: Using Stack (Optimized Approach)
// TC -> O(n) , SC -> O(n) auxiliary space

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        stack<int> st;
        
        for(int i  = 0 ; i< n ; i++)
        {
            while(!st.empty() && arr[st.top()] > arr[i]){ // NSR condition
                int idx = st.top();
                st.pop(); // NOW top NSL
                
                int range; // total postion the curr arr ele is smllest
                
                if(st.empty())
                    range = i;
                else
                    range = i - st.top() - 1;
                
                ans[range-1] = max(ans[range-1], arr[idx]); // (range-1) means updating the pos(0's base) in ans arr
            }
            st.push(i);
        }
        
        // remain stack ele
        while(!st.empty()){
            int idx = st.top();
            st.pop();
            int range;
            
            if(st.empty())
                range = n;
            else
                range = n - st.top() - 1;
            
            ans[range - 1] = max(ans[range -1], arr[idx]);
        }
        
        // last remain ans position check ans value fullup if empty with the next greater ele
        for(int i = n-2 ; i>= 0 ; i--)
            ans[i] = max(ans[i], ans[i+1]);
        
        return ans;
    }
};
