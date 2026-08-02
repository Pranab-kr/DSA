#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  // variable allocte heep mem

  int *p = new int;
  cout << p << endl;
  *p = 10; // val assign
  cout << *p << endl;

  float *p1 = new float;
  cout << p1 << endl;
  *p1 = 10.12; // val assign
  cout << *p1;

  // arr allocation in heep
  int n;
  cout << "Enter the size of arr: ";
  cin >> n;

  int *arr = new int[n]; // dynamic mem allocation

  cout << "Enter the ele of arr: ";
  for (int i = 0; i < n; i++)
    arr[i] = i + 1;

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  // delete ( To remove the heep allocate mem)
  delete p;
  delete p1;
  delete[] arr;

  return 0;
}
