// wave print
#include <iostream>
using namespace std;

int main() {

  int mat[4][4] = {3, 6, 4, 2, 7, 8, 11, 5, 9, 3, 2, 1, 17, 8, 5, 9};

  for (int col = 0; col < 4; col++) {

    if (col % 2 == 0) {
      for (int row = 0; row < 4; row++)
        cout << mat[row][col] << " ";

    } else {
      for (int row = 3; row >= 0; row--)

        cout << mat[row][col] << " ";
    }
  }
  return 0;
}
