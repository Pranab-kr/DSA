#include <iostream>
using namespace std;

class Student {

private:
  string name;
  int roll;
  char grade;

public:
  void setName(string n) { name = n; }
  void setRoll(int r) { roll = r; }
  void setGrade(char c) { grade = c; }

  void getInfo(string code) {
    if (code == "true")
      cout << name << " " << roll << " " << grade << endl;

    return;
  }
};

int main(int argc, char *argv[]) {
  Student s1;
  s1.setName("Pranab");
  s1.setRoll(122);
  s1.setGrade('A');

  s1.getInfo("true");

  return 0;
}
