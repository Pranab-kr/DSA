class Solution {
public:
  bool canWinNim(int n) {
    if (n % 4 == 0)
      return false;
    else
      return true;
  }
};

/*
 * if i go first and the num is factor of 4 than i will lose , and if the num %
 * 4 != 0 not a factor of 4 than i will
 */
