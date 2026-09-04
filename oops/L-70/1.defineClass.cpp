#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int roll;
  char grade;
};

int main(int argc, char *argv[]) {
  Student s1;
  s1.name = "prnab";
  s1.roll = 122;
  s1.grade = 'A';

  Student s2;
  s2.name = "Rohit";
  s2.roll = 110;
  s2.grade = 'B';

  cout << s1.name << " " << s1.roll << " " << s1.grade << endl;
  cout << s2.name << " " << s2.roll << " " << s2.grade << endl;
  return 0;
}
