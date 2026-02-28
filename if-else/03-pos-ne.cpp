#include <iostream>
using namespace std;

int main() {

  int num;

  cout << "Enter ur number - ";
  cin >> num;

  if (num < 0)
    cout << "Negative" << endl;
  else if (num > 0)
    cout << "Positive" << endl;
  else
    cout << "Enter a valid num (not 0 or other character!)" << endl;
}
