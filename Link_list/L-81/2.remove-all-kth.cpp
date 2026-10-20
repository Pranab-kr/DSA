// Remove Every k'th in Linked List
// https://www.geeksforgeeks.org/problems/remove-every-kth-node/1

class Solution {
public:
  Node *deleteK(Node *head, int K) {
    // code here
    if (K == 1)
      return NULL; // to del all list

    Node *curr = head;
    Node *prev = NULL;
    int count = 1;
    while (curr != NULL) {
      if (count == K) {
        prev->next = curr->next;
        delete curr;
        curr = prev->next;
        count = 1;
      } else {
        prev = curr;
        curr = curr->next;
        count++;
      }
    }
    return head;
  }
};
