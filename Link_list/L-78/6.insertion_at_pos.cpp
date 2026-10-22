// Time Complexity: O(n)
// Auxiliary Space: O(1)

#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};

int main(int argc, char *argv[]) {

  Node *Head = NULL;
  int arr[4] = {1, 2, 3, 4};
  int pos = 2; // after 2 index 1 insert

  for (int i = 0; i < 4; i++) {
    // when LL is not exist
    if (Head == NULL)
      Head = new Node(arr[i]);

    // when LL is exist
    else {
      Node *temp = new Node(arr[i]);
      temp->next = Head;
      Head = temp;
    }
  }
  // Print the LL (we use a temp pointer to itterate)
  Node *temp = Head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;

  // insertion at pos
  temp = Head;
  for (int i = 0; i < pos - 1; i++) {
    temp = temp->next;
  }

  int val = 69;
  Node *newNode = new Node(val);
  newNode->next = temp->next;
  temp->next = newNode;

  // Print the LL after insertion at pos
  temp = Head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
  return 0;
}
