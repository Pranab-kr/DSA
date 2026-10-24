// Remove Cycle in Linked List
// https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
//
// Time Complexity: O(n)
// Auxiliary Space: O(1)

// METHOD 1: use math formula logic
class Solution {
public:
  void removeLoop(Node *head) {
    // code here
    if (!head || !head->next)
      return;

    Node *fast = head;
    Node *slow = head;

    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;

      // loop exist
      if (fast == slow) {
        slow = head;

        // find the loop st node
        while (slow != fast) {
          slow = slow->next;
          fast = fast->next;
        }
        // when the both land on loop st node
        // move the slow one node and keep the fast on same node
        while (slow->next != fast)
          slow = slow->next;

        // remove the loop
        slow->next = NULL;
        return;
      }
    }
  }
};

// METHOD 2: by using len of the loop
class Solution {
public:
  void removeLoop(Node *head) {
    // code here
    if (!head || !head->next)
      return;

    Node *fast = head;
    Node *slow = head;

    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;

      // loop exist
      if (fast == slow) {
        slow = fast->next;
        int count = 1;

        // count the len of the loop
        while (slow != fast) {
          slow = slow->next;
          count++;
        }
        fast = head;

        // move the fast to len of the loop from head
        while (count--)
          fast = fast->next;

        slow = head;

        // find the loop's st node from head
        while (slow != fast) {
          slow = slow->next;
          fast = fast->next;
        }
        // when the both land on loop st node
        // move the slow one node and keep the fast on same node
        while (slow->next != fast)
          slow = slow->next;

        // remove the loop
        slow->next = NULL;
        return;
      }
    }
  }
};
