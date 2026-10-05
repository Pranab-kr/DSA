#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ofstream fout;
  fout.open("sample.txt");
  fout << "Line 1\n";
  fout << "Line 2\n";
  fout << "Line 3\n";
  fout.close();

  ifstream fin;
  fin.open("sample.txt");
  string line;
  while (getline(fin, line)) {
    cout << line << endl;
  }
  fin.close();
  return 0;
}
