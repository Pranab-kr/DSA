// Tower Of Hanoi
// https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
//
// TC -> O(2^n - 1) , SC -> O(n)

class Solution {
public:
  int toh(int n, int s, int h, int d) {
    if (n == 1) {
      return 1;
    }
    int count = 0;
    count += toh(n - 1, s, d, h);
    count++;
    count += toh(n - 1, h, s, d);

    return count;
  }

  int towerOfHanoi(int n, int from, int to, int aux) {
    // code here
    return toh(n, from, to, aux);
  }
};
