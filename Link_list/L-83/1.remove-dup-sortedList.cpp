// Remove Duplicates in Sorted Linked List (singly LL)
// https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
//
// METHOD 1: using extra arr
// TC-> O(n) , sc-> O(n)

class Solution {
public:
  Node *removeDuplicates(Node *head) {
    // code here
    if (head->next == NULL)
      return head;

    vector<int> arr;
    arr.push_back(head->data);
    Node *curr = head->next;

    while (curr) {
      if (arr[arr.size() - 1] != curr->data)
        arr.push_back(curr->data);
      curr = curr->next;
    }

    int idx = 0;
    curr = head;
    Node *prev = NULL;

    while (idx < arr.size()) {
      prev = curr;
      curr->data = arr[idx];
      curr = curr->next;
      idx++;
    }

    prev->next = NULL; // last node pointing to NULL

    return head;
  }
};

// METHOD 2: using two pointers
// TC-> O(n) , SC-> O(1)

class Solution {
public:
  Node *removeDuplicates(Node *head) {
    // code here
    if (head->next == NULL)
      return head;

    Node *curr = head->next;
    Node *prev = head;

    while (curr) {
      if (prev->data == curr->data) {
        prev->next = curr->next;
        delete curr;
        curr = prev->next;
      } else {
        prev = prev->next;
        curr = curr->next;
      }
    }

    return head;
  }
};
