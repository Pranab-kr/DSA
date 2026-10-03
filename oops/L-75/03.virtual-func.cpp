#include <iostream>
#include <vector>
using namespace std;

// Abstract Class: A class containing at least one pure virtual function. You
// cannot create objects of this class directly, but you can create pointers or
// references to it to achieve runtime polymorphism
class Animal {
public:
  virtual void sound() { cout << "Animal makes a sound" << endl; }

  // A virtual function that has no implementation in the base class and is
  // declared by appending = 0 to its prototype. Derived classes must override
  // this function, or they will also become abstract classes.

  // virtual void sound()=0; // Pure virtual function (abstract method)
};

class Dog : public Animal {
public:
  void sound() { cout << "Dog barks" << endl; }
};

class Cat : public Animal {
public:
  void sound() { cout << "Cat meows" << endl; }
};

int main() {
  Animal *animalPtr = new Dog();
  // animalPtr->sound(); // Output: Dog barks

  vector<Animal *> animals;
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Animal());
  animals.push_back(new Dog());
  animals.push_back(new Cat());

  for (int i = 0; i < animals.size(); i++) {
    animals[i]->sound();
  }

  // Clean up memory
  for (int i = 0; i < animals.size(); i++) {
    delete animals[i];
  }
  delete animalPtr;
  return 0;
}
