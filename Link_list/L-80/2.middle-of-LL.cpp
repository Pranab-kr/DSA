// 876. Middle of the Linked List
// https://leetcode.com/problems/middle-of-the-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// METHOD 1: count the nodes, then move to the middle
// Time Complexity: O(n)
// Auxiliary Space: O(1)
// class Solution {
// public:
//   ListNode *middleNode(ListNode *head) {
//     ListNode *temp = head;
//     int count = 0;
//
//     while (temp) {
//       temp = temp->next;
//       count++;
//     }
//     count /= 2;
//     temp = head;
//
//     while (count--)
//       temp = temp->next;
//
//     return temp;
//   }
// };

// METHOD 2: using fast and slow pointer
// Time Complexity: O(n)
// Auxiliary Space: O(1)
class Solution {
public:
  ListNode *middleNode(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;

    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }

    return slow;
  }
};
