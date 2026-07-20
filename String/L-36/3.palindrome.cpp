
#include <iostream>
#include <string>
using namespace std;

int main() {

  string s = "naman";

  int n = s.size();
  int st = 0, end = n - 1;
  while (st < end) {
    if (s[st] != s[end]) {
      cout << "Not a palindrome";
      return 0;
    }
    st++, end--;
  }

  cout << "palindrome";

  return 0;
}
