#include <iostream>
using namespace std;

int main() {

  char c;

  cout << "Enter ur character - ";
  cin >> c;

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    cout << "vowl" << endl;

  else
    cout << "Consonent" << endl;
}
