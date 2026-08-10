#include <iostream>
#include <string>
#include <utility>
using namespace std;

void revStr(string &s, int st, int end) {

  if (st >= end)
    return;

  swap(s[st], s[end]);
  revStr(s, st + 1, end - 1);
}

int main(int argc, char *argv[]) {
  string s;
  cout << "Enter a str: ";
  cin >> s;
  revStr(s, 0, s.size() - 1);
  cout << s;

  return 0;
}
