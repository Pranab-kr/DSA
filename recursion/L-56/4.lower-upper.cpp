#include <iostream>
#include <string>
using namespace std;

void lowerToUpper(string &s, int end) {

  if (end < 0)
    return;

  // s[end] = s[end] - 32;
  s[end] = 'A' + s[end] - 'a';
  lowerToUpper(s, end - 1);
}

int main(int argc, char *argv[]) {
  string s;
  cout << "Enter a str: ";
  cin >> s;
  lowerToUpper(s, s.size() - 1);
  cout << s;

  return 0;
}
