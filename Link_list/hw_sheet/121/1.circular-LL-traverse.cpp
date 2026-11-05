// Circular Linked List Traversal
// https://www.geeksforgeeks.org/problems/circular-linked-list-traversal/1

// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
  public:
    void printList(Node* head) {
    if(!head){
        return;
    }
    
    Node* curr = head;
        
    do{
        cout<< curr->data <<" ";
        curr = curr->next;
    } while(curr != head);
        
    }
};