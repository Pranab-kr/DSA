#include <iostream>
#include <string>
using namespace std;

// HW: "const" keyword

class Customer {

  string name;
  int bal;
  static int totalCustomer;
  static inline int totalBal = 0;

public:
  // static int totalCustomer;

  Customer(string name, int bal) {
    this->name = name;
    this->bal = bal;
    totalCustomer++;
    totalBal += bal;
  }

  // static method has access the static var of the class not the obj var
  static void accStatic() {
    cout << "Total customer: " << totalCustomer << endl;

    cout << "Total balance: " << totalBal << endl;
  }

  void diposit(int amount) {
    if (amount > 0) {
      bal += amount;
      totalBal += amount;
    }
  }

  void withdraw(int amount) {
    if (amount <= bal && amount > 0) {
      bal -= amount;
      totalBal -= amount;
    }
  }

  void diaplay() {
    cout << this->name << " " << this->bal << " " << totalCustomer << endl;
  }

  void totalCus() { cout << "totalCustomer: " << totalCustomer << endl; }
};

int Customer::totalCustomer = 0;

int main(int argc, char *argv[]) {

  Customer c1("Pranab", 1000);
  c1.diaplay();
  Customer c2("Rohit", 2000);
  c2.diaplay();

  // when the static var in public we can access this direct
  // Customer::totalCustomer = 5;
  c1.totalCus();

  // when static var in private to direct access
  Customer::accStatic();

  c1.diposit(5000);
  c2.withdraw(1000);

  c1.diaplay();
  c2.diaplay();
  Customer::accStatic();

  return 0;
}
