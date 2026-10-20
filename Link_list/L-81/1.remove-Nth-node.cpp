// 19. Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *curr = head;
    ListNode *prev = NULL;
    int count = 0;

    while (curr) {
      count++;
      curr = curr->next;
    }

    curr = head;
    count -= n;
    if (count == 0) { // edge case handle when 1st ele need to remove
      ListNode *temp = head;
      head = head->next;
      delete temp;
      return head;
    }

    while (count--) {
      prev = curr;
      curr = curr->next;
    }

    prev->next = curr->next;
    delete curr;

    return head;
  }
};
