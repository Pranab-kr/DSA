// 61. Rotate List
// https://leetcode.com/problems/rotate-list/description/

class Solution {
public:
  ListNode *rotateRight(ListNode *head, int k) {

    // edge case handle when no or 1 Node
    if (head == NULL || head->next == NULL)
      return head;

    ListNode *curr = head;
    ListNode *prev = NULL;
    int count = 0;

    while (curr) {
      count++;
      curr = curr->next;
    }

    // reduce the roration times
    k = k % count;

    // edge case when 0 rotaion needed
    if (k == 0)
      return head;

    curr = head;

    int tail_after = count - k;

    while (tail_after--) {
      prev = curr;
      curr = curr->next;
    }
    ListNode *temp = curr;

    prev->next = NULL;

    while (temp->next != NULL) {
      temp = temp->next;
    }

    temp->next = head;
    head = curr;

    return head;
  }
};

// SOLUTION 2: using a extra arr and swiping the elements
class Solution {
public:
  ListNode *rotateRight(ListNode *head, int k) {

    if (head == NULL || head->next == NULL)
      return head;

    ListNode *curr = head;
    ListNode *prev = NULL;
    vector<int> arr;

    while (curr) {
      arr.push_back(curr->val);
      curr = curr->next;
    }

    k = k % arr.size();

    if (k == 0)
      return head;

    curr = head;

    int tail_after = arr.size() - k;

    for (int i = tail_after; i < arr.size(); i++) {
      curr->val = arr[i];
      curr = curr->next;
    }

    for (int i = 0; i < tail_after; i++) {
      curr->val = arr[i];
      curr = curr->next;
    }

    return head;
  }
};
