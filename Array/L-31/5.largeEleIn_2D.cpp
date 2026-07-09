#include <climits>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int large = INT_MIN;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (large < arr1[i][j]) {
        large = arr1[i][j];
      }
    }
  }

  cout << "The large ele in 2D arr is: " << large << endl;
  return 0;
}
