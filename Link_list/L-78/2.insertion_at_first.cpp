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
  return 0;
}
