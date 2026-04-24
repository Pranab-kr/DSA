class Solution {
public:
  vector<int> twoSum(vector<int> &arr, int target) {
    int n = arr.size();
    int st = 0, end = n - 1;
    vector<int> ans;

    while (st < end) {
      if (arr[st] + arr[end] == target) {
        ans.push_back(st + 1);
        ans.push_back(end + 1);
        return ans;
      } else if (arr[st] + arr[end] < target)
        st++;
      else
        end--;
    }
    return ans;
  }
};

//
// Example 1:
//
// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We
// return [1, 2].
