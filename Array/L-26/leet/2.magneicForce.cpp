class Solution {
public:
  int maxDistance(vector<int> &position, int m) {
    // code here
    int n = position.size();
    if (n < m)
      return -1;
    int st = 1, end, mid, ans;
    sort(position.begin(), position.end());
    end = position[n - 1] - position[0];

    while (st <= end) {
      mid = st + (end - st) / 2;
      int pos = position[0], count = 1;

      for (int i = 1; i < n; i++) {
        if (pos + mid <= position[i]) {
          count++;
          pos = position[i];
        }
      }

      if (count < m)
        end = mid - 1;
      else {
        ans = mid;
        st = mid + 1;
      }
    }
    return ans;
  }
};

// In the universe Earth C-137, Rick discovered a special form of magnetic force
// between two balls if they are put in his new invented basket. Rick has n
// empty baskets, the ith basket is at position[i], Morty has m balls and needs
// to distribute the balls into the baskets such that the minimum magnetic force
// between any two balls is maximum.
//
// Rick stated that magnetic force between two different balls at positions x
// and y is |x - y|.
//
// Given the integer array position and the integer m. Return the required
// force. Input: position = [1,2,3,4,7], m = 3 Output: 3 Explanation:
// Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force
// between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot
// achieve a larger minimum magnetic force than 3.
//
