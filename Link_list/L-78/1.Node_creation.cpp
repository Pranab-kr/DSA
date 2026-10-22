// Time Complexity: O(1)
// Auxiliary Space: O(1)

#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};

int main(int argc, char *argv[]) {

  Node *Head = new Node(20);
  cout << Head->data << " " << Head->next << endl;

  return 0;
}
