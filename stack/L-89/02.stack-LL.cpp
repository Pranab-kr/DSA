#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

class stack {
  Node *top;
  int size;

public:
  stack() {
    top = NULL;
    size = 0;
  }

  // push
  void push(int val) {
    Node *temp = new Node(val);
    if (temp == NULL) {
      cout << "Stack overflow" << endl;
      return;
    }

    temp->next = top;
    top = temp;
    cout << val << " is pushed in stack" << endl;
    size++;
  }

  void pop() {
    if (top == NULL) {
      cout << "stack is underflow" << endl;
      return;
    }
    Node *temp = top;
    top = top->next;
    cout << temp->data << " is poped" << endl;
    size--;
    delete temp;
  }

  int peak() {
    if (top == NULL) {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    return top->data;
  }

  bool isEmpty() { return top == NULL; }

  int isSize() { return size; }
};

int main(int argc, char *argv[]) {
  stack s;

  s.push(-1);
  // s.push(2);
  // s.push(3);
  // s.push(4);
  // s.push(5);

  // s.pop();

  int peak = s.peak();
  if (s.isSize()) { // handle the -1;
    cout << "TOS: " << peak << endl;
  }

  cout << s.isSize() << endl;
  cout << s.isEmpty() << endl;

  return 0;
}
