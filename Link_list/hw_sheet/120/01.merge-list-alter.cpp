// Merge Lists Alternatingly
// https://www.geeksforgeeks.org/problems/merge-list-alternatingly/1
// Time Complexity: O(n + m)
// Auxiliary Space: O(1)

class Solution {
public:
  vector<Node *> mergeList(Node *head1, Node *head2) {
    // code Here
    if (!head1 || !head2)
      return {head1, head2};

    Node *curr1 = head1, *curr2 = head2;

    while (curr1 && curr2) {
      Node *temp1 = curr1->next, *temp2 = curr2->next; // next itteration node

      curr1->next = curr2;
      curr2->next = temp1;

      // next itteration node assign
      curr1 = temp1;
      curr2 = temp2;
    }

    vector<Node *> res;
    res.push_back(head1);
    res.push_back(curr2);

    return res;
  }
};
