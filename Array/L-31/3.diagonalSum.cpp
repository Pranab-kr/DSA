#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int j = 2;
  int diaSum1 = 0, diaSum2 = 0;
  for (int i = 0; i < 3; i++) {
    diaSum1 += arr1[i][i];

    diaSum2 += arr1[i][j];
    j--;
  }

  cout << "diaSum1 is: " << diaSum1 << " diaSum2 is: " << diaSum2 << endl;
  return 0;
}
