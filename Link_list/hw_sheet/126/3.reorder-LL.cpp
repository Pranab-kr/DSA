// Reorder List
// https://www.geeksforgeeks.org/problems/reorder-list/1

// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
  public:
  
    Node* findMid(Node* head){
        Node* fast = head->next, *slow = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
  
    void reorderList(Node* head) {
        Node* mid = findMid(head);
        
        // reverse the 2nd part
        Node* curr = mid->next, *prev = NULL;
        mid->next = NULL;
        
        while(curr){
            Node* fut = curr->next;
            
            curr->next = prev;
            prev = curr;
            
            curr = fut;
        }
        
        Node* revHead = prev;
        
        
        // merging
        curr = head;
        Node* revCurr = revHead;
        
        while(revCurr && curr){
            Node* fut = curr->next;
            Node* revFut = revCurr->next;
            
            curr->next = revCurr;
            revCurr->next = fut;
            
            curr = fut;
            revCurr = revFut;
        }
        
    }
};