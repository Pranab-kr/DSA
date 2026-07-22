// 12. Integer to Roman
// https://leetcode.com/problems/integer-to-roman/description/
// Time: O(1) (Roman numerals are limited to 3999, and there are only 13 symbols
// to check.) Space: O(1) (Ignoring the output string.)

class Solution {
public:
  string intToRoman(int num) {

    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roman[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                      "XL", "X",  "IX", "V",  "IV", "I"};

    string ans;

    for (int i = 0; i < 13; i++) {
      while (num >= value[i]) {
        ans += roman[i];
        num -= value[i];
      }
    }

    return ans;
  }

  // diff method
  //      string ans;
  //      while(num){
  //      if(num >=1000){
  //      ans += "M";
  //      num -= 1000;
  //      }
  //      else if( num >= 900) {
  //          ans += "CM";
  //          num -= 900;
  //      }
  //      else if(num >= 500){
  //          ans += 'D';
  //          num -= 500;
  //      }
  //      else if(num >= 400){
  //          ans += "CD";
  //          num -=400;
  //      }
  //      else if(num >= 100){
  //          ans += 'C';
  //          num -= 100;
  //      }
  //      else if(num >= 90) {
  //          ans += "XC";
  //          num -= 90;
  //      }
  //      else if( num >= 50) {
  //          ans += 'L';
  //          num -= 50;
  //      }
  //      else if(num >=40) {
  //          ans += "XL";
  //          num -=40;
  //      }
  //      else if(num >=10){
  //          ans += 'X';
  //          num -= 10;
  //      }
  //      else if(num >= 9){
  //          ans += "IX";
  //          num -=9;
  //      }
  //      else if(num >=5){
  //          ans += 'V';
  //          num -= 5;

  //     }
  //     else if(num >= 4){
  //         ans += "IV";
  //         num -=4;
  //     }
  //     else if(num >=1){
  //         ans +='I';
  //         num -=1;
  //     }

  // }
  // return ans;
  // }
};
