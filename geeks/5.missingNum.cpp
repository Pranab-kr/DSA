class Solution {
public:
  int missingNum(vector<int> &arr) {
    long long sumArr = 0;
    long long n = arr.size() + 1;

    for (int i = 0; i < arr.size(); i++) {
      sumArr += arr[i];
    }

    // sum of n natural numbers
    long long sum = n * (n + 1) / 2;

    // missing ele
    return sum - sumArr;
  }
};
