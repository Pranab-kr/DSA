// 415. Add Strings
// https://leetcode.com/problems/add-strings/description/
//
// TC -> O(n) , SC -> O(n)

class Solution {
public:
  string add(string num1, string num2) {
    int idx1 = num1.size() - 1, idx2 = num2.size() - 1;
    string ans;
    int sum = 0, carry = 0;

    while (idx2 >= 0) {
      sum = (num1[idx1] - '0') + (num2[idx2] - '0') + carry;
      carry = sum / 10;
      char c = '0' + sum % 10;
      ans += c;
      idx1--, idx2--;
    }

    while (idx1 >= 0) {
      sum = num1[idx1] - '0' + carry;
      carry = sum / 10;
      char c = '0' + sum % 10;
      ans += c;
      idx1--;
    }

    if (carry)
      ans += ('0' + carry); // or ans += '1'; // appends character '1'

    reverse(ans.begin(), ans.end());

    return ans;
  }

  string addStrings(string num1, string num2) {
    if (num1.size() < num2.size())
      return add(num2, num1);
    else
      return add(num1, num2);
  }
};
