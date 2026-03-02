class Solution {
public:
  int bitwiseComplement(int n) {
    if (n == 0)
      return 1;
    int com = 0, p = 1;

    while (n != 0) {
      int rem = !(n % 2);
      com = com + rem * p;
      p *= 2;
      n /= 2;
    }
    return com;
  }
};
