// Cycle Length in Linked List
// https://www.geeksforgeeks.org/problems/find-length-of-loop/1
//
// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
public:
  int lengthOfLoop(Node *head) {
    // code here
    if (head == NULL || head->next == NULL)
      return 0;

    Node *slow = head;
    Node *fast = head;
    int count = 0;
    while (fast && fast->next) {

      fast = fast->next->next;
      slow = slow->next;

      if (fast == slow) {
        count++;
        fast = fast->next;
        while (fast != slow) {
          count++;
          fast = fast->next;
        }
        return count;
      }
    }
    return count;
  }
};
