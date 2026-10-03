#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  try {
    int *p = new int[1000000000000000];
    cout << "Memory allocated successfully." << endl;
    delete[] p;
  } catch (const bad_alloc &e) {
    cout << "Exception: " << e.what() << endl;
  }
  return 0;
}
