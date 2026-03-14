class Solution {
public:
  int getSecondLargest(vector<int> &arr) {
    // code here
    int ans = INT_MIN, size = arr.size();

    for (int i = 0; i < size; i++) {
      if (ans < arr[i]) {
        ans = arr[i];
      }
    }

    int sec = -1;
    for (int i = 0; i < size; i++) {
      if (ans != arr[i]) {
        sec = max(sec, arr[i]);
      }
    }

    return sec;
  }
};
