#include <cmath>
#include <iostream>
using namespace std;

bool checkArmstrong(int num) {
  int temp = num;
  int count = 0;

  // count digits
  while (temp != 0) {
    temp /= 10;
    count++;
  }

  temp = num;
  int sum = 0;

  // calculate power sum
  while (temp != 0) {
    int rem = temp % 10;
    sum += pow(rem, count);
    temp /= 10;
  }

  return sum == num;
}

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;

  if (checkArmstrong(n))
    cout << "Armstrong Number";
  else
    cout << "Not Armstrong";

  return 0;
}
