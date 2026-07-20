// Missing And Repeating
// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
//
// TC -> O(n) , SC -> O(1)

class Solution {
public:
  vector<int> findTwoElement(vector<int> &arr) {
    // code here
    int n = arr.size();

    // decrease by one
    for (int i = 0; i < n; i++)
      arr[i]--;

    // main work loop (ocurance)
    for (int i = 0; i < n; i++) {

      int temp = arr[i] % n;
      arr[temp] += n;
    }

    // res
    vector<int> ans(2);

    for (int i = 0; i < n; i++) {
      int feq = arr[i] / n;

      // repeating num
      if (feq == 2)
        ans[0] = i + 1;

      // missing num
      if (feq == 0)
        ans[1] = i + 1;
    }

    return ans;
  }
};
