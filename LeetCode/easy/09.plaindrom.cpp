class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
      return false; // negative check and the num check like 10 ,20, 30

    int rev = 0;
    int real = x;

    while (x != 0) {
      if (rev > INT_MAX / 10)
        return false;
      rev = rev * 10 + x % 10;
      x /= 10;
    }

    return (rev == real);
  }
};
