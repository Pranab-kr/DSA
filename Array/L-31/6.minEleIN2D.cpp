
#include <climits>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int minimum = INT_MAX;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (minimum > arr1[i][j]) {
        minimum = arr1[i][j];
      }
    }
  }

  cout << "The minimum ele in 2D arr is: " << minimum << endl;
  return 0;
}
