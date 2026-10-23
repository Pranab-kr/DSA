// Sort Llinked List of 0s, 1s and 2s
// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
//
// Time Complexity: O(n)
// Auxiliary Space: O(1)
//
// METHOD 1: using count
class Solution {
public:
  Node *segregate(Node *head) {
    // code here
    int count0 = 0, count1 = 0, count2 = 0;

    Node *curr = head;

    while (curr) {
      if (curr->data == 0)
        count0++;
      else if (curr->data == 1)
        count1++;
      else
        count2++;

      curr = curr->next;
    }

    curr = head;

    while (count0--) {
      curr->data = 0;
      curr = curr->next;
    }
    while (count1--) {
      curr->data = 1;
      curr = curr->next;
    }
    while (count2--) {
      curr->data = 2;
      curr = curr->next;
    }

    return head;
  }
};

// METHOD 2 : using three head and tail
class Solution {
public:
  Node *segregate(Node *head) {
    if (head == NULL || head->next == NULL)
      return head;

    Node *head0 = new Node(0);
    Node *head1 = new Node(1);
    Node *head2 = new Node(2);

    Node *tail0 = head0;
    Node *tail1 = head1;
    Node *tail2 = head2;

    Node *curr = head;

    while (curr) {
      if (curr->data == 0) {
        tail0->next = curr;
        tail0 = curr;
        curr = curr->next;
        tail0->next = NULL;
      } else if (curr->data == 1) {
        tail1->next = curr;
        tail1 = curr;
        curr = curr->next;
        tail1->next = NULL;
      } else {
        tail2->next = curr;
        tail2 = curr;
        curr = curr->next;
        tail2->next = NULL;
      }
    }
    // Join the three lists
    if (head1->next) {
      tail0->next = head1->next;
    }

    if (head2->next) {
      if (head1->next) {
        tail1->next = head2->next;
      } else {
        tail0->next = head2->next;
      }
    }

    // Find the first non-empty list
    Node *newHead;

    if (head0->next) {
      newHead = head0->next;
    } else if (head1->next) {
      newHead = head1->next;
    } else {
      newHead = head2->next;
    }

    // Delete dummy nodes
    delete head0;
    delete head1;
    delete head2;

    return newHead;
  }
};
