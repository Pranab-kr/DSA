// polymorphism: operator overloading (compile time)
#include <iostream>
using namespace std;

class Complex {
  int real, img;

public:
  Complex() {}

  Complex(int real, int img) {
    this->real = real;
    this->img = img;
  }

  void display() { cout << real << " + i" << img << endl; }

  Complex operator+(Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }
};

int main(int argc, char *argv[]) {

  Complex c1(3, 4);
  Complex c2(5, 6);

  c1.display();
  c2.display();

  Complex c3 = c1 + c2; // c1.operator+(c2)
  c3.display();

  return 0;
}
