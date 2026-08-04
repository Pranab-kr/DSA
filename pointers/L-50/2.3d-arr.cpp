
#include <iostream>
using namespace std;

int main() {
  int l, b, h;
  cout << "Enter the length , breath & height: ";
  cin >> l >> b >> h;

  // 3d arr creattion
  int ***ptr = new int **[l];

  for (int i = 0; i < l; i++) {
    ptr[i] = new int *[b];

    for (int j = 0; j < b; j++) {
      ptr[i][j] = new int[h];
    }
  }

  cout << "Enter the vals of arr: ";

  // user ip value assing
  for (int i = 0; i < l; i++)
    for (int j = 0; j < b; j++)
      for (int k = 0; k < h; k++)
        cin >> ptr[i][j][k];

  for (int i = 0; i < l; i++)
    for (int j = 0; j < b; j++)
      for (int k = 0; k < h; k++)
        cout << ptr[i][j][k] << " ";

  // clean up heep memory
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < b; j++) {
      delete[] ptr[i][j]; // delete int[h]
    }
    delete[] ptr[i]; // delete int*[b];
  }

  delete[] ptr; // delete int **[l]

  return 0;
}
