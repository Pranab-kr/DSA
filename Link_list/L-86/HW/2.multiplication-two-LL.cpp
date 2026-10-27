// Multiply Two Linked Lists
// https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1
// Time Complexity: O(max(n,m)), where n is the size of L1 and m is the size of
// L2 Auxiliary Space: O(1)
class Solution {
public:
  int multiplyTwoLists(Node *first, Node *second) {

    long long M = 1000000007;
    long long res1 = 0, res2 = 0;

    Node *curr1 = first, *curr2 = second;

    while (curr1 || curr2) {

      if (curr1) {
        int digit = curr1->data;
        res1 = (res1 * 10 + digit) % M; // to keep the res in under M
        curr1 = curr1->next;
      }

      if (curr2) {
        int digit = curr2->data;
        res2 = (res2 * 10 + digit) % M;
        curr2 = curr2->next;
      }
    }

    return (res1 * res2) % M;
  }
};
