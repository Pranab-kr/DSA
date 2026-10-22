// Reverse a Doubly Linked List
// https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
public:
  Node *reverse(Node *head) {
    // code here
    Node *curr = head;
    Node *fut = NULL;
    Node *prev = NULL;

    while (curr) {
      fut = curr->next;
      curr->next = prev;
      curr->prev = fut;
      prev = curr;
      curr = fut;
    }

    return prev;
  }
};
