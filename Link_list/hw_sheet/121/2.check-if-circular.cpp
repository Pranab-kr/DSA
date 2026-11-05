// Check if Linked List is Circular
// https://www.geeksforgeeks.org/problems/circular-linked-list/1

// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
  public:
    bool isCircular(Node *head) {
        // code here
        Node* fast = head, *slow = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow)
                return true;
        }
        
        return false;
    }
};