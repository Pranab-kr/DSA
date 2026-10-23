// Merge Two Sorted Linked Lists
// https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
//
// Time Complexity: O(n + m)
// Auxiliary Space: O(1)

class Solution {
public:
  Node *sortedMerge(Node *head1, Node *head2) {
    // if dont want to create new first node then use this
    // Node *head = NULL;
    // if(head1->data <= head2->data){
    //     head = head1;
    //     head1= head1->next;
    //     head->next = NULL;
    // } else{
    //     head = head2;
    //     head2 = head2->next;
    //     head->next = NULL;
    // }

    Node *head = new Node(0); // first node  create for to access tail
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

    // if some node exist then connect them to tail's next
    if (head1)
      tail->next = head1;
    else
      tail->next = head2;

    // to delete first created extra node
    tail = head;
    head = head->next;
    delete tail;
    //

    return head;
  }
};
