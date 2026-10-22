// Time Complexity: O(n)
// Auxiliary Space: O(n)  // recursion stack

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

Node *createLL(int arr[], int idx, int size, Node *prev) {
  if (idx == size) {
    return NULL;
  }

  Node *newNode = new Node(arr[idx]);
  newNode->prev = prev;
  newNode->next = createLL(arr, idx + 1, size, newNode);

  return newNode;
}

int main(int argc, char *argv[]) {
  int arr[5] = {1, 2, 3, 4, 5};

  Node *head = createLL(arr, 0, 5, NULL);

  Node *temp = head;

  // print
  cout << "NULL->";
  while (temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL";

  return 0;
}
