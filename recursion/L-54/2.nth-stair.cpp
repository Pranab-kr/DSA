// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/
#include <iostream>
using namespace std;

class Solution {
public:
  int climbStairs(int n) {
    if (n <= 1)
      return 1;

    return climbStairs(n - 1) + climbStairs(n - 2);
  } // TLE in leetcode so have to solve using dp
};

int main() {
  int n = 5;

  Solution s;
  cout << s.climbStairs(n) << endl;

  return 0;
}
