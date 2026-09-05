// Abstraction is the process of hiding complex, unnecessary details to focus
// only on the essential features of a system or idea

#include <iostream>
using namespace std;

class Customer {
  string name;
  int balance, age;

public:
  Customer(string name, int balance, int age) {
    this->name = name;
    this->balance = balance;
    this->age = age;
  }

  void deposit(int amount) {
    if (balance > 0)
      this->balance += amount;
  }

  void withdraw(int amount) {
    if (amount > 0 && amount <= balance)
      this->balance -= amount;
  }

  void updateAge(int age) {
    if (age > 0 && age < 100) {
      this->age = age;
    }
  }

  void display() {
    cout << "Name: " << this->name << " balance: " << this->balance
         << " age: " << this->age << endl;
  }
};

int main(int argc, char *argv[]) {
  Customer c1("Prnaba", 1000, 21), c2("Rohit", 2000, 20);
  c1.display(), c2.display();

  c1.deposit(3000), c2.withdraw(1500);
  c1.updateAge(22), c2.updateAge(25);

  c1.display(), c2.display();
  return 0;
}
