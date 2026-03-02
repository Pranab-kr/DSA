class Solution {
public:
  int mySqrt(int x) {
    if (x < 2)
      return x;

    int res = 1;
    while (res <= (x / res)) {
      res++;
    }
    return --res;
  }
};
