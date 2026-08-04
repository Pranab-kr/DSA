#include <iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Enter the row and col: " << endl;
  cin >> n >> m;

  int **ptr = new int *[n];
  for (int i = 0; i < n; i++)
    ptr[i] = new int[m]; // created 2D arr

  cout << "Enter the val of the arr: " << endl;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> ptr[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cout << ptr[i][j] << " ";

  // cout << sizeof(ptr) << " " << endl;
  // cout << sizeof(ptr[0]) << endl;

  // clean up heep
  for (int i = 0; i < n; i++)
    delete[] ptr[i]; // delete mem of int[m]

  delete[] ptr; // delete mem of int *[n]

  return 0;
}
