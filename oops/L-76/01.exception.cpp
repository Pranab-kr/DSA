#include <iostream>
#include <stdexcept>
using namespace std;

// Custom exception class for invalid amount
class InvalidAmountError : public runtime_error {
public:
  InvalidAmountError(const string &msg) : runtime_error(msg) {}
};

class Customer {
  string name;
  int bal, acc_no;

public:
  Customer(string name, int bal, int acc_no) {
    this->name = name;
    this->bal = bal;
    this->acc_no = acc_no;
  }
  void deposit(int amt) {
    if (amt <= 0) {
      throw InvalidAmountError(
          "Invalid deposit amount. Please enter a positive value.");
    }
    bal += amt;
    cout << "Deposit successful. New balance: " << bal << endl;
  }

  void withdraw(int amt) {
    if (amt > 0 && amt <= bal) {
      bal -= amt;
      cout << "Withdrawal successful. New balance: " << bal << endl;
    } else if (amt > bal) {
      throw InvalidAmountError("Insufficient balance. Withdrawal failed.");
    } else {
      throw "Invalid withdrawal amount. Please enter a positive value.";
    }
  }
};

int main(int argc, char *argv[]) {
  Customer c1("Rohit", 1000, 12345);
  try {
    c1.deposit(100);
    // c1.withdraw(0); // last default catch block executed
    c1.withdraw(5000);
    c1.deposit(1000);
  } catch (const InvalidAmountError &e) {
    cout << "Error: " << e.what() << endl;
  } catch (const exception &e) {
    cout << "Exception: " << e.what() << endl;
  } catch (...) {
    cout << "An unknown error occurred." << endl;
  }

  return 0;
}
