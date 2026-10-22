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

// Time Complexity: O(n)
// Auxiliary Space: O(1)
int main(int argc, char *argv[]) {
  int arr[5] = {1, 2, 3, 4, 5};
  int pos = 2;

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
  int val = 69;

  if (pos == 0) {       // insert at pos first
    if (head == NULL) { // when LL is not exist
      head = new Node(val);
    } else { // when LL exist
      Node *temp = new Node(val);
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
  } else {
    Node *curr = head;
    while (--pos) {
      curr = curr->next;
    }

    if (curr->next == NULL) { // last pointer insert handle
      Node *temp = new Node(val);
      temp->prev = curr;
      curr->next = temp;

    } else { // insert middle
      Node *newNode = new Node(69);
      newNode->prev = curr;
      newNode->next = curr->next;
      curr->next = newNode;
      newNode->next->prev = newNode;
    }
  }
  temp = head;
  // after print
  cout << "\nNULL->";
  while (temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL";

  return 0;
}

// PRACTICE: HW
// Insertion in a Doubly Linked List
// https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1

// Time Complexity: O(n)
// Auxiliary Space: O(1)

// Constraints:
// 1 ≤ size of linked list ≤ 104
// 0 ≤ node.data, x ≤ 104
// 0 ≤ p < head.size()

class Solution {
public:
  Node *insertAtPos(Node *head, int p, int x) {
    // code here
    Node *curr = head;

    while (p--) {
      curr = curr->next;
    }
    Node *temp = new Node(x);
    temp->prev = curr;
    temp->next = curr->next;

    if (curr->next != NULL)    // check before update if its the last pos or not
      curr->next->prev = temp; // it's not last pos so update

    curr->next = temp; // update curr next so point to newNode

    return head;
  }
};
