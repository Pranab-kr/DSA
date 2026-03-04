#include <iostream>
using namespace std;

int Sum(int a, int b) { return a + b; }

bool IsEven(int n) { return n % 2 == 0; }

void PrintMessage(string message) { cout << message << endl; }

int main() {
  int num1 = 5, num2 = 10;
  int result = Sum(num1, num2);
  cout << "Sum: " << result << endl;

  int number = 4;
  if (IsEven(number)) {
    cout << number << " is even." << endl;
  } else {
    cout << number << " is odd." << endl;
  }

  PrintMessage("Hello, World!");

  return 0;
}
