#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> arr(5);
  cout << "Enter 5 integers: ";
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  // write the vector to a file
  ofstream fout;
  fout.open("vector.txt");

  fout << "The original vector is: \n";
  for (int i = 0; i < 5; i++) {
    fout << arr[i] << " ";
  }

  fout << "\nThe sorted vector is: \n";

  sort(arr.begin(), arr.end());
  for (int i = 0; i < 5; i++) {
    fout << arr[i] << " ";
  }
  fout.close();
  return 0;
}
