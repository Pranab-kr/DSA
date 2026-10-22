// Time Complexity: O(1)  // for the deletion step (building the list takes O(n))
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

  // deletion 1st
  if (Head != NULL) {
    temp = Head;
    Head = Head->next;
    delete temp;
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
