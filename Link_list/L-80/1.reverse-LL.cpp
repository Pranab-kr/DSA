// 206. Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list/description/

// METHOD 1: soft reverse (only values, not next address)
// Time Complexity: O(n)
// Auxiliary Space: O(n)  // extra vector
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *temp = head;
//         vector<int> arr;
//
//         while(temp != NULL){
//             arr.push_back(temp->val);
//             temp = temp->next;
//         }
//         temp = head;
//         int idx = arr.size() - 1;
//
//         while(temp != NULL){
//             temp->val = arr[idx];
//             temp = temp->next;
//             idx--;
//         }
//         return head;
//     }
// };

// METHOD 2: full reverse (with next address)
// Time Complexity: O(n)
// Auxiliary Space: O(1)
// class Solution {
// public:
//   ListNode *reverseList(ListNode *head) {
//     ListNode *curr = head;
//     ListNode *prev = NULL;
//     ListNode *fu = NULL;
//
//     while (curr != NULL) {
//       fu = curr->next;
//       curr->next = prev;
//       prev = curr;
//       curr = fu;
//     }
//     head = prev;
//
//     return head;
//   }
// };

// METHOD 3: using recursion
// Time Complexity: O(n)
// Auxiliary Space: O(n)  // recursion stack
class Solution {
public:
  ListNode *revLL(ListNode *curr, ListNode *prev) {
    if (curr == NULL)
      return prev;

    ListNode *fut = curr->next;
    curr->next = prev;

    return revLL(fut, curr);
  }

  ListNode *reverseList(ListNode *head) {
    ListNode *prev = NULL;

    return revLL(head, prev);
  }
};
