// Intersection in Y Shaped Lists
// https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
//
// Time Complexity: O(n + m)
// Auxiliary Space: O(1)

class Solution {
public:
  Node *intersectPoint(Node *head1, Node *head2) {
    //  code here

    int count1 = 0, count2 = 0;
    Node *temp1 = head1, *temp2 = head2;

    while (temp1) {
      count1++;
      temp1 = temp1->next;
    }
    while (temp2) {
      count2++;
      temp2 = temp2->next;
    }
    temp1 = head1, temp2 = head2;

    // reduce the len of the temp1 to match length of temp2
    while (count1 > count2) {
      temp1 = temp1->next;
      count1--;
    }
    // reduce the len of the temp2 to match length of temp1
    while (count2 > count1) {
      temp2 = temp2->next;
      count2--;
    }

    while (temp1 != temp2) {
      temp1 = temp1->next;
      temp2 = temp2->next;
    }
    // when two head list never intersect( at last became both NULL)
    if (!temp1)
      return NULL;

    return temp1;
  }
};

// METHOD 2: by forming loop and finding the loop st to get the insertion
class Solution {
public:
  Node *intersectPoint(Node *head1, Node *head2) {
    Node *curr = head1;

    while (curr->next) {
      curr = curr->next;
    }

    curr->next = head2;

    Node *fast = head1, *slow = head1;

    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;

      if (fast == slow) {
        slow = head1;

        while (slow != fast) {
          slow = slow->next;
          fast = fast->next;
        }
        return slow;
      }
    }

    return NULL;
  }
};
