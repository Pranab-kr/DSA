// Time Complexity: O(n)
// Auxiliary Space: O(1)

#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

Node *createLL(int arr[], int idx, int size) {
  if (idx == size)
    return NULL;

  Node *temp = new Node(arr[idx]);
  temp->next = createLL(arr, idx + 1, size);

  return temp;
}

int main(int argc, char *argv[]) {
  int arr[4] = {1, 2, 3, 4};
  Node *Head = NULL;

  Head = createLL(arr, 0, 4);

  // before print
  Node *temp = Head;
  while (temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;

  // deletion end Node
  if (Head != NULL) {         // check if LL present
    if (Head->next == NULL) { // when one node present
      Node *temp = Head;
      Head = NULL;
      delete temp;
    } else { // when more then one Node present
      Node *curr = Head;
      Node *prev = NULL;

      while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
      }
      delete curr;
      prev->next = NULL;
    }
  }

  // after deletion print
  temp = Head;
  while (temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
  return 0;
}
