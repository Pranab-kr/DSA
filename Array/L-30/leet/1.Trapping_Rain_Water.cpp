class Solution {
public:
  int trap(vector<int> &height) {
    int n = height.size(), leftMax = 0, rightMax = 0, water = 0,
        maxHeight = height[0], idx = 0;

    for (int i = 0; i < n; i++) {
      if (height[i] > maxHeight) {
        maxHeight = height[i];
        idx = i;
      }
    }
    // left Part
    for (int i = 0; i < idx; i++) {
      if (leftMax > height[i])
        water += leftMax - height[i];
      else
        leftMax = height[i];
    }
    // right part
    for (int i = n - 1; i > idx; i--) {
      if (rightMax > height[i])
        water += rightMax - height[i];
      else
        rightMax = height[i];
    }
    return water;
  }
};

// 42. Trapping Rain Water
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array
// [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section)
// are being trapped.
