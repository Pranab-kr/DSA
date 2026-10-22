// Delete Node Without Linked List Head
// https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1

// Time Complexity: O(1)
// Auxiliary Space: O(1)

/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
public:
  void deleteNode(Node *x) {
    // code here
    Node *temp = x->next;
    x->data = temp->data;
    x->next = temp->next;
    delete temp;
  }
};
