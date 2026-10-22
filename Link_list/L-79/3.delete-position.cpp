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

// Time Complexity: O(n)  // for the deletion step
// Auxiliary Space: O(n)  // recursion stack for createLL
int main(int argc, char *argv[]) {
  int arr[4] = {1, 2, 3, 4};
  Node *Head = NULL;
  int pos = 3;

  Head = createLL(arr, 0, 4);

  // before print
  Node *temp = Head;
  while (temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;

  // deletion end Node
  if (Head != NULL && pos > 0) { // check if LL present
    if (pos == 1) {              // when pos 1 need to delete
      Node *temp = Head;
      Head = Head->next;
      delete temp;

    } else { // when more then one Node present
      Node *curr = Head;
      Node *prev = NULL;

      // itterate over to the pos-1 so the actual pos can be del
      for (int i = 0; i < pos - 1; i++) {
        prev = curr;
        curr = curr->next;
      }
      prev->next = curr->next;
      delete curr;
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

// https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
// Linked List Delete at Position
//
// /* Structure of Linked List Node
// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }
// };
// */
// METHOD 1: iterative
// Time Complexity: O(n)
// Auxiliary Space: O(1)
// class Solution {
//   public:
//     Node* deleteNode(Node* head, int x) {
//         // code here
//         if (head == NULL || x <= 0) // if LL not exist and position less or
//         eq to 0
//             return head;
//
//             if(x == 1){ // for first pos del
//                 Node *temp = head;
//                 head = head->next;
//                 delete temp;
//                 return head;
//             }
//             else {
//                 Node *curr = head;
//                 Node *prev = NULL;
//                 x--;
//
//                 while(x--){
//                     prev = curr;
//                     curr = curr->next;
//                 }
//                 prev->next = curr->next;
//                 delete curr;
//             }
//         return head;
//     }
// };
// METHOD 2: using recursion
// Time Complexity: O(n)
// Auxiliary Space: O(n)  // recursion stack
// class Solution {
//   public:
//     Node* deleteNode(Node* curr, int x) {
//         // code here
//         if(x == 1){
//             Node *temp = curr->next;
//             delete curr;
//             return temp;
//         }
//
//         curr->next = deleteNode(curr->next, x-1);
//         return curr;
//     }
// };
