// Detect Loop in Linked List
// https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
//
// Time Complexity: O(n)
// Auxiliary Space: O(m) // for map

// METHOD 1: using map
class Solution {
public:
  bool detectLoop(Node *head) {
    // code here
    unordered_map<Node *, bool> visited;
    Node *curr = head;

    while (curr) {
      if (visited[curr])
        return true;
      visited[curr] = true;
      curr = curr->next;
    }
    return false;
  }
};

// METHOD 2: using fast and slow ptr
// TC-> O(N) , SC-> O(1)

class Solution {
public:
  bool detectLoop(Node *head) {
    // code here
    if (head == NULL || head->next == NULL)
      return false;

    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next) { // always check fast first cause fast->next can
                                 // gave segmentaion fault

      fast = fast->next->next;
      slow = slow->next;

      if (fast == slow)
        return true;
    }
    return false;
  }
};
