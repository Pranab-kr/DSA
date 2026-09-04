#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int age;
};

int main(int argc, char *argv[]) {

  Student *s = new Student;
  // (*s).name = "Prnab";
  // (*s).age = 21;
  // or
  s->name = "Prnab";
  s->age = 21;

  // cout << (*s).name << " " << (*s).age << endl;
  cout << s->name << " " << s->age << endl;

  return 0;
}
