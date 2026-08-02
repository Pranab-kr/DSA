
#include <iostream>
#include <vector>
using namespace std;

void swapping(int &a,
              int &b) { // referance variable same address location
  int temp = a;
  a = b;
  b = temp;

  cout << &a << endl; // same address
}

void passVec(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++)
    arr[i] = 20;
}

void doubleArr(int arr1[]) { // Pass by pointer ( int *arr1 )
  for (int i = 0; i < 5; i++) {
    arr1[i] = arr1[i] * 2; // *(arr1 + i) = *(arr1+i) * 2;
  }
}

// use ref pass for vector and string
// use pointer pass for int arr, char arr
int main() {
  int a = 10, b = 20;
  cout << &a << endl;

  swapping(a, b);

  cout << "a: " << a << " " << "b: " << b << endl;

  vector<int> arr(5, 0);

  passVec(arr);

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  int arr1[5] = {2, 3, 4, 5, 6};

  doubleArr(arr1); // Pass by pointer

  cout << endl;
  for (int i = 0; i < 5; i++)
    cout << arr1[i] << " ";

  return 0;
}
