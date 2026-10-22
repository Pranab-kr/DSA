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
  Node *Tail = NULL; // optimise a Tail pointer always point to Last Node
  int arr[4] = {1, 2, 3, 4};

  for (int i = 0; i < 4; i++) {
    // when LL is not exist
    if (Head == NULL) {
      Head = new Node(arr[i]);
      Tail = Head;
    }
    // when LL is exist
    else { // creating a New Node at last pos and  Tail point to Last
           // Node
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }

    //   else { // without optimise
    //     Node *tail = Head;
    //
    //     while (tail->next != NULL)
    //       tail = tail->next;
    //
    //     tail->next = new Node(arr[i]);
    //   }
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
