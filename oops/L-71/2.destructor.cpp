#include <iostream>
#include <string>
using namespace std;

class Customer {
  string name;
  int *data;

public:
  Customer() {
    name = "4";

    cout << "Constructor is called for: " << this->name << endl;
  }

  Customer(string name) {
    this->name = name;
    // data = new int;
    // *data = 10;
    // cout << sizeof(data) << endl;
    cout << "Constructor is called for: " << this->name << endl;
  }
  // destructor (auto created by compiler to release resorse and heep mem(ptr))
  ~Customer() {
    // delete data;
    cout << "destructor is called for: " << this->name << endl;
  }
};

int main(int argc, char *argv[]) {
  Customer c1("1"), c2("2"), c3("3");

  // dynamic obj allocation
  Customer *c4 = new Customer;
  delete c4; // delete the resourse for dynamic obj

  return 0;
}
