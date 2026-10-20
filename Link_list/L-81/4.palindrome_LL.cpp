// 234. Palindrome Linked List
// https://leetcode.com/problems/palindrome-linked-list/description/

// METHOD 1: using prev and curr
class Solution {
public:
  bool isPalindrome(ListNode *head) {

    if (head->next == NULL)
      return true;

    int count = 0;
    ListNode *curr = head;
    ListNode *prev = NULL;

    while (curr) {
      count++;
      curr = curr->next;
    }

    int half = count / 2;
    curr = head;

    while (half--) {
      prev = curr;
      curr = curr->next;
    }

    prev->next = NULL;

    // reverse
    prev = NULL;
    ListNode *fut = NULL;

    while (curr) {
      fut = curr->next;
      curr->next = prev;
      prev = curr;
      curr = fut;
    }

    // compare
    ListNode *head1 = head;
    ListNode *head2 = prev; // new head after reverse

    while (head1 && head2) {
      if (head1->val != head2->val)
        return false;

      head1 = head1->next;
      head2 = head2->next;
    }

    return true;
  }
};

// MINE
class Solution {
public:
  bool isPalindrome(ListNode *head) {

    if (head->next == NULL)
      return true;

    int count = 0;
    ListNode *temp = head;

    while (temp) {
      count++;
      temp = temp->next;
    }

    int half = count / 2;
    half--;
    temp = head;

    while (half--) {
      temp = temp->next;
    }
    ListNode *head2 = temp->next;
    temp->next = NULL;

    // reverse
    ListNode *prev = NULL;
    ListNode *curr = head2;
    ListNode *fut = NULL;

    while (curr) {
      fut = curr->next;
      curr->next = prev;
      prev = curr;
      curr = fut;
    }
    head2 = prev;

    // compare
    temp = head;
    ListNode *temp2 = head2;

    while (temp2 && temp) {
      if (temp->val != temp2->val)
        return false;
      else {
        temp = temp->next;
        temp2 = temp2->next;
      }
    }
    return true;
  }
};

// METHOD 2: using a extra vector
class Solution {
public:
  bool isPalindrome(ListNode *head) {
    vector<int> arr;
    ListNode *temp = head;

    while (temp) {
      arr.push_back(temp->val);
      temp = temp->next;
    }
    int st = 0, end = arr.size() - 1;

    while (st < end) {
      if (arr[st] != arr[end])
        return false;
      else
        st++, end--;
    }

    return true;
  }
};
