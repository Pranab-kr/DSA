// 169. Majority Element
// https://leetcode.com/problems/majority-element/description/
// https://www.geeksforgeeks.org/problems/majority-element-1587115620/1
//
//
// TC -> O(n) , SC -> O(1)

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int n = nums.size(), candidate = -1, count = 0;

    for (int i = 0; i < n; i++) {
      if (count == 0) {
        candidate = nums[i];
        count++;
      } else {
        if (candidate == nums[i])
          count++;
        else
          count--;
      }
    }

    // varification for safe if the Major ele is not exist (noot need for leet
    // code problem)
    count = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] == candidate)
        count++;
    }
    if (count > n / 2)
      return candidate;
    else
      return -1;
  }
};
