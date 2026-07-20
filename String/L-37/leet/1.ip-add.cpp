// 1108. Defanging an IP Address
// https://leetcode.com/problems/defanging-an-ip-address/description/
// TC -> O(n) , SC -> O(n)

class Solution {
public:
  string defangIPaddr(string address) {
    int idx = 0;
    string ans;

    while (idx < address.size()) {
      if (address[idx] == '.')
        ans += "[.]";

      else
        ans += address[idx];
      idx++;
    }
    return ans;
  }
};
