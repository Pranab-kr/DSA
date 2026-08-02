#include <iostream>
using namespace std;

int main() {

  char arr[5] = "1234";

  char *ptr = arr;

  cout << arr << endl; // Print the val of the char arr;

  cout << ptr << endl;

  cout << (void *)arr << endl; // Print the address of the char arr

  cout << (void *)ptr << endl;

  char name = 'a';

  cout << &name << " "; // random char print until see the null char '\0'

  cout << endl;
  cout << (void *)&name << endl; // TO fix

  return 0;
}
