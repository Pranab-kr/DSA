// Add Number Linked Lists
// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
// Time Complexity: O(n + m)
// Auxiliary Space: O(1)
//
class Solution {
public:
  Node *revLL(Node *curr, Node *prev) {
    if (curr == NULL)
      return prev;

    Node *fut = curr->next;
    curr->next = prev;

    return revLL(fut, curr);
  }

  Node *addTwoLists(Node *head1, Node *head2) {
    head1 = revLL(head1, NULL);
    head2 = revLL(head2, NULL);

    Node *curr1 = head1;
    Node *curr2 = head2;

    int carry = 0;

    Node *dummy = new Node(0);
    Node *tail = dummy;

    while (curr1 || curr2 || carry) {
      int sum = carry;

      if (curr1) {
        sum += curr1->data;
        curr1 = curr1->next;
      }

      if (curr2) {
        sum += curr2->data;
        curr2 = curr2->next;
      }

      tail->next = new Node(sum % 10);
      tail = tail->next;

      carry = sum / 10;
    }

    Node *result = revLL(dummy->next, NULL);
    delete dummy;

    // Remove leading zeros, keeping at least one node
    while (result->data == 0 && result->next != NULL) {
      Node *temp = result;
      result = result->next;
      delete temp;
    }

    return result;
  }
};
