class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
      return false; // negative check

    long rev = 0;
    int real = x;

    while (x != 0) {
      rev = rev * 10 + x % 10;
      x /= 10;
    }

    return (rev == real);
  }
};
