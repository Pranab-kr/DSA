#include <iostream>
using namespace std;
// p -> padding
//  12 byte,a p p p b b b b p p p c
//  class a {
//    char a;
//    int b;
//    char c;
//  };
//  8 byte,a c p p b b b b
//  class a {
//    char a;
//    char c;
//    int b;
//  };
//  16 byte,a c p p b b b b e e e e e e e e
class a {
  char a;
  char c;
  int b;
  double e;
};

int main(int argc, char *argv[]) {
  a obj;
  cout << sizeof(obj) << " ";
  return 0;
}
