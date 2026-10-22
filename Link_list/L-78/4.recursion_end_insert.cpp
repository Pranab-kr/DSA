// Time Complexity: O(n)
// Auxiliary Space: O(n)  // recursion stack

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

Node *createLL(int arr[], int idx, int n) {
  if (idx == n)
    return NULL;

  Node *temp = new Node(arr[idx]);
  temp->next = createLL(arr, idx + 1, n);

  return temp;
}

int main(int argc, char *argv[]) {

  Node *Head = NULL;
  int arr[4] = {1, 2, 3, 4};

  Head = createLL(arr, 0, 4);

  // Print the LL (we use a temp pointer to itterate)
  Node *temp = Head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
  return 0;
}
