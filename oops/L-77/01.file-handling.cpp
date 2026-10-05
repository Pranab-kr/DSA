#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // write the file
  ofstream fout;
  fout.open(
      "sampla.txt"); // if file does not exist then it will create a new file
  fout << "This is a sample text file." << endl;
  fout.close(); // close the file

  // read the file
  ifstream fin;
  fin.open("sampla.txt");
  char ch;
  ch = fin.get(); // read the first character from the file including whitespace

  while (!fin.eof()) {
    cout << ch;
    ch = fin.get();
  }
  fin.close(); // close the file

  return 0;
}
