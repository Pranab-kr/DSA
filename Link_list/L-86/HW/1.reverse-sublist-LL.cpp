// reverse Sublist of Linked List
// https://www.geeksforgeeks.org/problems/reverse-a-sublist-of-a-linked-list/1
// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
public:
  Node *reverseBetween(int a, int b, Node *head) {
    // code here
    Node *first = new Node(0); /// create a dummy node
    first->next = head;
    head = first;

    int count = (b - a) + 1;

    Node *curr = first->next, *prev = first, *second = first->next;

    while (--a) {
      curr = curr->next;
      prev = prev->next;
    }
    // before st reversinf node keep prev and curr for
    // after reversion the two node point to right node
    first = prev;
    second = curr;

    while (count--) {
      Node *fut = curr->next;
      curr->next = prev;
      prev = curr;
      curr = fut;
    }

    first->next = prev;
    second->next = curr;

    first = head;
    head = head->next;
    delete first; // dummy node cleanup

    return head;
  }
};
