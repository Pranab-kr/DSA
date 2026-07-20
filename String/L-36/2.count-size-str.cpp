
#include <iostream>
#include <string>
using namespace std;

int main() {

  string s = "Pranab";

  int size = 0;
  while (s[size] != '\0') {
    size++;
  }

  cout << size;

  return 0;
}
