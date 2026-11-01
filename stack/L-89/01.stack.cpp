#include <iostream>
using namespace std;

class stack {
  int *arr;
  int top;
  int size;

public:
  bool flag;

  stack(int size) {
    this->size = size;
    top = -1;
    arr = new int[size];
    flag = 1; // is stack empty or not keep track to handle -ve val
  }

  void push(int val) {
    if (top == size - 1) {
      cout << "Stack is overflow" << endl;
      return;
    }
    top++;
    arr[top] = val;
    cout << "Pushed " << val << " into the top" << endl;
    flag = 0;
  }

  void pop() {
    if (top == -1) {
      cout << "Stack is underflow!" << endl;
      return;
    }
    cout << "poped " << arr[top] << " from top" << endl;
    top--;

    if (top == -1)
      flag = 1;
  }

  int peak() {
    if (top == -1) {
      cout << "Stack is empty ";
      return -1;
    }
    return arr[top];
  }

  bool isEmpty() { return top == -1; }

  // stack ele size
  int isSize() { return top + 1; }
};

int main(int argc, char *argv[]) {
  stack s(5);
  s.push(-1);
  // s.push(1);
  // s.push(2);
  // s.push(3);

  // s.pop();

  int val = s.peak();
  if (s.flag == 0) // to handle -1 pushed val
    cout << val << endl;

  cout << s.isEmpty() << endl;
  cout << "stack size: " << s.isSize() << endl;

  return 0;
}
