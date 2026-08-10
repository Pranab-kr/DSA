#include <iostream>
#include <string>
using namespace std;

int vowel(string s, int end) {
  if (end < 0)
    return 0;

  if (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' ||
      s[end] == 'u')
    return 1 + vowel(s, end - 1);
  else
    return vowel(s, end - 1);
}

int main(int argc, char *argv[]) {
  string s;
  cout << "Enter a str: ";
  cin >> s;

  cout << vowel(s, s.size() - 1);
  return 0;
}
