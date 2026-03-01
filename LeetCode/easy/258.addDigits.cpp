class Solution {
public:
  int addDigits(int num) {
    if (num >= 0 && num <= 9)
      return num;

    int res;

    do {
      res = 0;
      while (num > 0) {
        int rem = num % 10;
        res += rem;
        num /= 10;
      }
      if (res > 9)
        num = res;
    } while (res > 9);

    return res;
  }
};

// another solution
//  class Solution {
//  public:
//      int addDigits(int num) {
//          if(num >= 0 && num <=9) return num;
//
//          while(num > 9){
//             int res = 0;
//          while(num > 0){
//              int rem = num % 10;
//              res += rem;
//              num /= 10;
//          }
//          num = res;
//          }
//
//      return num;
//      }
//  };
