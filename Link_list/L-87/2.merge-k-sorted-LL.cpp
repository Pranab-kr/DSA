// Merge K Sorted Linked Lists
// https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1

// TC -> O(nklogk) , SC -> O(logk)
// using mergeSort approch to merge
class Solution {
public:
  Node *merge(Node *head1, Node *head2) {
    Node *head = new Node(0);
    Node *tail = head;

    while (head1 && head2) {
      if (head1->data <= head2->data) {
        tail->next = head1;
        tail = head1;
        head1 = head1->next;
      } else {
        tail->next = head2;
        tail = head2;
        head2 = head2->next;
      }
      tail->next = NULL;
    }
    if (head1)
      tail->next = head1;
    else
      tail->next = head2;

    Node *temp = head;
    head = head->next;
    delete temp;

    return head;
  }

  void mergeSort(vector<Node *> &arr, int st, int end) {
    if (st >= end)
      return;

    int mid = st + (end - st) / 2;

    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);

    arr[st] = merge(arr[st], arr[mid + 1]);
  }

  Node *mergeKLists(vector<Node *> &arr) {
    // code here

    mergeSort(arr, 0, arr.size() - 1);

    return arr[0];
  }
};

// METHOD 2: itterative (TLE)
// Node *head = arr[0];
// for (int i = 1; i < arr.size(); i++) {
//    head = merge(head, arr[i]);
// }
// return head;
