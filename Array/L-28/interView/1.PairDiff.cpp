
int Solution::solve(vector<int> &arr, int target) {
  sort(arr.begin(), arr.end());
  int n = arr.size();
  int st = 0, end = 1;

  if (target < 0)
    target *= -1; // make target +ve

  while (end < n) {
    if (arr[end] - arr[st] == target)
      return 1;
    else if (arr[end] - arr[st] < target)
      end++;
    else
      st++;

    if (st == end)
      end++;
  }
  return 0;
}

// Pair With Given Difference
// Example Input
//
// Input 1:
//
//  A = [5, 10, 3, 2, 50, 80]
//  B = 78
// Input 2:
//
//  A = [-10, 20]
//  B = 30
// Example Output
// Output 1:
//
//  1
// Output 2:
//
//  1
