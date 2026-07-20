#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {

  string s = "Pranab";

  int n = s.size();
  int st = 0, end = n - 1;
  while (st < end) {
    swap(s[st], s[end]);
    st++, end--;
  }

  cout << s;

  return 0;
}
