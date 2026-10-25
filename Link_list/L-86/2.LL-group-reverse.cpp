// Linked List Group Reverse
// https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
public:
  Node *reverseKGroup(Node *head, int k) {
    // code here
    Node *first = new Node(0);
    first->next = head;
    head = first;

    // until first->next became empty cause then List last reach
    while (first->next) {
      int x = k;
      Node *second = first->next, *curr = first->next;
      Node *prev = first;

      // curr also cause when curr becomes NULL but x is not 0 to handle that
      while (x && curr) {
        Node *fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;

        x--;
      }

      // correct next node point to the node after reverse loop
      first->next = prev;
      second->next = curr;

      first = second; // for next loop second becames first
    }

    // remove dummy node
    first = head;
    head = head->next;
    delete first;

    return head;
  }
};
