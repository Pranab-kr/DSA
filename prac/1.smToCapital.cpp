#include <iostream>
using namespace std;

char smToCapital(char ch) {
  return ch - 'a' + 'A'; // or return ch - 32;
}

int main() {
  char ch;

  cout << "Enter a lowercase character: ";
  cin >> ch;

  cout << "Capital letter: " << smToCapital(ch) << endl;

  return 0;
}
