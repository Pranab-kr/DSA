// Rearrange Linked List
// https://www.geeksforgeeks.org/problems/rearrange-a-linked-list/1
// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
public:
  void rearrangeEvenOdd(Node *head) {
    // code here
    if (!head || !head->next)
      return;

    Node *odd = head, *even = head->next, *evenHead = even;

    while (even &&
           even->next) { // when reach last then even or even->next became NULL
      odd->next = even->next;
      odd = odd->next;

      even->next = odd->next;
      even = even->next;
    }

    // last connect odd next with even head
    odd->next = evenHead;
  }
};
