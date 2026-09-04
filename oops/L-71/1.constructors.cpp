#include <iostream>
#include <string>
using namespace std;

class Customer {
  string name;
  int balance;

public:
  // default constructor
  Customer() {
    name = "Unknown";
    balance = 0;
  }
  // parameterized constructor
  Customer(string name, int balance) {
    this->balance = balance;
    this->name = name;
  }
  // Customer(string name) {
  //   this->name = name;
  //   this->balance = 100;
  // }

  // inline constructor
  inline Customer(string a) : name(a), balance(100) {}

  void info() { cout << this->name << " " << this->balance << endl; }

  // custom copy constructor rewrite
  Customer(Customer &B) {
    name = B.name;
    balance = B.balance;
  }
};

int main(int argc, char *argv[]) {
  Customer c1;
  Customer c2("Pranab", 1000);
  Customer c3("Ram");

  c1.info();
  c2.info();
  c3.info();

  // copy constructor work
  Customer c4(c3);
  c4.info();

  // another method copy
  Customer c5;
  c5 = c4;
  c5.info();

  return 0;
}
