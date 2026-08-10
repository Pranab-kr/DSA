#include <iostream>
#include <string>
using namespace std;

bool chkPal(string s, int st, int end) {

  if (st >= end) {
    return 1;
  }

  if (s[st] == s[end]) {
    return chkPal(s, st + 1, end - 1);
  }
  return 0;
}

int main(int argc, char *argv[]) {
  string s;
  cout << "Enter a str: ";
  cin >> s;

  cout << chkPal(s, 0, s.size() - 1);
  return 0;
}
