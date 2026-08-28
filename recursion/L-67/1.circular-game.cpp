// 1823. Find the Winner of the Circular Game
// https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
//
// TC -> O(n^2) , SC -> O(n)

class Solution {
public:
  int winner(vector<bool> &person, int n, int idx, int perleft, int k) {
    // if one person left then winner
    if (perleft == 1) {
      for (int i = 0; i < n; i++)
        if (person[i] == 0)
          return i;
    }

    // find the pos to kill
    int kill = (k - 1) % perleft;

    // go to the index to kill
    while (kill--) {
      idx = (idx + 1) % n;

      // if 1(kill) then increase until next 0 for next kill
      while (person[idx] == 1)
        idx = (idx + 1) % n;
    }
    // mark as kill
    person[idx] = 1;
    // if 1(kill) then increase until next 0 for next kill

    while (person[idx] == 1)
      idx = (idx + 1) % n;

    return winner(person, n, idx, perleft - 1, k);
  }

  int findTheWinner(int n, int k) {
    vector<bool> person(n, 0);

    return winner(person, n, 0, n, k) + 1;
  }
};

// Method 2 : TC->O(n), SC->O(n)
class Solution {
public:
  int winner(int n, int k) {
    if (n == 1)
      return 0;
    return (winner(n - 1, k) + k) % n;
  }

  int findTheWinner(int n, int k) { return winner(n, k) + 1; }
};
