// Flatten Linked List
// https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1

// TLE err
// METHOD 1: normal one by one merge
class Solution {
public:
  Node *merge(Node *head1, Node *head2) {
    Node *head = new Node(0);
    Node *tail = head;

    while (head1 && head2) {
      if (head1->data <= head2->data) {
        tail->bottom = head1;
        tail = head1;
        head1 = head1->bottom;
      } else {
        tail->bottom = head2;
        tail = head2;
        head2 = head2->bottom;
      }
      tail->bottom = NULL;
    }
    if (head1)
      tail->bottom = head1;
    else
      tail->bottom = head2;

    Node *temp = head;
    head = head->bottom;
    delete temp;

    return head;
  }
  Node *flatten(Node *head) {
    // code here

    while (head->next) {
      Node *head1 = head, *head2 = head->next, *head3 = head->next->next;
      head1->next = NULL, head2->next = NULL;

      head = merge(head1, head2);

      head->next = head3;
    }

    return head;
  }
};

// METHOD 2: using mergeSort approch
// TC -> O(nklogk) , SC -> O(N)
class Solution {
public:
  Node *merge(Node *head1, Node *head2) {
    Node *head = new Node(0);
    Node *tail = head;

    while (head1 && head2) {
      if (head1->data <= head2->data) {
        tail->bottom = head1;
        tail = head1;
        head1 = head1->bottom;
      } else {
        tail->bottom = head2;
        tail = head2;
        head2 = head2->bottom;
      }
      tail->bottom = NULL;
    }
    if (head1)
      tail->bottom = head1;
    else
      tail->bottom = head2;

    Node *temp = head;
    head = head->bottom;
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

  Node *flatten(Node *head) {
    // code here
    vector<Node *> arr;
    Node *temp = head;

    while (temp) {
      arr.push_back(temp);
      temp = temp->next;
    }
    mergeSort(arr, 0, arr.size() - 1);

    return arr[0];
  }
};
