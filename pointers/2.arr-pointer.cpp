#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;

  // Print the address of first ele of idx 0
  cout << arr << endl;
  cout << arr + 0 << endl;
  cout << &arr[0] << endl;
  cout << ptr << endl;

  // Print the address of ele of idx 1

  cout << arr + 1 << endl;
  cout << &arr[1] << endl;

  // Print val
  for (int i = 0; i < 5; i++) {
    cout << *(arr + i) << " ";
  }
  cout << endl;

  cout << *ptr << endl;
  cout << *arr << endl;

  for (int i = 0; i < 5; i++) {
    cout << (arr + i) << endl;
  }

  // Print all val using ptr
  for (int i = 0; i < 5; i++) {
    cout << ptr[i] << " ";
  }
  for (int i = 0; i < 5; i++) {
    cout << *(ptr + i) << " ";
  }

  // Print address using ptr

  for (int i = 0; i < 5; i++) {
    cout << ptr + i << " ";
  }

  // Print all the val using arithmetic ptr++ or ptr-- or ptr = ptr + 2
  for (int i = 0; i < 5; i++) {
    cout << *ptr << " ";
    ptr++;
  }

  // err can't change the const arr val
  // arr++; or arr = arr + 2;

  return 0;
}
