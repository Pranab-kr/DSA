#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *prev;
  Node *next;

  Node(int data) {
    this->data = data;
    prev = next = NULL;
  }
};

int main(int argc, char *argv[]) {
  int arr[5] = {1, 2, 3, 4, 5};

  Node *head = NULL;
  Node *tail = NULL; // using a tail pointer to insert at end

  for (int i = 0; i < 5; i++) {
    if (head == NULL) {
      head = new Node(arr[i]);
      tail = head;
    } else {
      Node *temp = new Node(arr[i]);
      temp->prev = tail;
      tail->next = temp;
      tail = temp;
    }
  }

  Node *temp = head;

  // print
  cout << "NULL->";
  while (temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL";

  // deletion
  if (head != NULL) {
    if (head->next == NULL) { // if one node exist
      delete head;
      head = NULL;
    } else { // more then 1 node exist
      Node *temp = head;
      head = head->next;
      delete temp;
      head->prev = NULL;
    }
  }

  temp = head;
  // print after deletion
  cout << "\nNULL->";
  while (temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL";

  return 0;
}
