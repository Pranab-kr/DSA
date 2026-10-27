// Clone List with Next and Random
// https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

// METHOD 1: normal itternation
// TC -> O(n^2) , SC -> O(1)
class Solution {
public:
  Node *Find(Node *curr1, Node *curr2, Node *x) {
    if (x == NULL)
      return NULL;

    while (curr1 != x) {
      curr1 = curr1->next;
      curr2 = curr2->next;
    }
    return curr2;
  }
  Node *cloneLinkedList(Node *head) {
    // code here
    Node *headCopy = new Node(0); // dummy node
    Node *tailCopy = headCopy, *temp = head;

    while (temp) {
      tailCopy->next = new Node(temp->data);
      tailCopy = tailCopy->next;
      temp = temp->next;
    }
    // delete dummy
    tailCopy = headCopy;
    headCopy = headCopy->next;
    delete tailCopy;

    tailCopy = headCopy;
    temp = head;
    while (temp) {
      tailCopy->random = Find(head, headCopy, temp->random);
      tailCopy = tailCopy->next;
      temp = temp->next;
    }

    return headCopy;
  }
};

// METHOD 2: using unordered_map
// TC -> O(n) , SC -> O(n)
class Solution {
public:
  Node *cloneLinkedList(Node *head) {
    // code here
    Node *headCopy = new Node(0); // dummy node
    Node *tailCopy = headCopy, *temp = head;

    while (temp) {
      tailCopy->next = new Node(temp->data);
      tailCopy = tailCopy->next;
      temp = temp->next;
    }
    // delete dummy
    tailCopy = headCopy;
    headCopy = headCopy->next;
    delete tailCopy;

    tailCopy = headCopy;
    temp = head;

    unordered_map<Node *, Node *> m;

    // map assign
    while (temp) {
      m[temp] = tailCopy;
      tailCopy = tailCopy->next;
      temp = temp->next;
    }
    temp = head, tailCopy = headCopy;

    // assign random pointer to clone LL
    while (temp) {
      tailCopy->random = m[temp->random];
      tailCopy = tailCopy->next;
      temp = temp->next;
    }

    return headCopy;
  }
};

// METHOD 3: Most optimized
// TC -> O(n) , SC -> O(1)
class Solution {
public:
  Node *cloneLinkedList(Node *head) {
    Node *temp = head;

    // create copy Node and combine with original
    while (temp) {
      Node *front = temp->next;
      Node *newNode = new Node(temp->data);
      temp->next = newNode;
      newNode->next = front;
      temp = newNode->next;
    }

    // assin random
    Node *curr1 = head;
    while (curr1) {
      Node *curr2 = curr1->next;

      if (curr1->random)
        curr2->random = curr1->random->next;
      curr1 = curr2->next;
    }
    // break the two LL
    curr1 = head;
    Node *headCopy = head->next;

    while (curr1->next) {
      Node *front = curr1->next;
      curr1->next = front->next;
      curr1 = front;
    }

    return headCopy;
  }
};
