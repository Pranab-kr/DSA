// Merge Sort on Doubly Linked List
// https://www.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1

// Time Complexity: O(n log n)
// Auxiliary Space: O(log n)

class Solution {
  public:
  
    Node* merge(Node* left , Node* right){
        Node* newHead = new Node(-1);
        Node* tail = newHead;
        
        while(left && right){
            if(left->data <= right->data){
                tail->next = left;
                left->prev = tail;
                tail = left;
                
                left = left->next; 
            } else{
                tail->next = right;
                right->prev = tail;
                tail = right;
                
                right = right->next;
            }
        }
        
        if(left){
            tail->next = left;
            left->prev = tail;
        }
        
        if(right){
            tail->next = right;
            right->prev = tail;
        }
        
        tail = newHead;
        newHead = newHead->next;
        delete tail;
        newHead->prev = NULL;
        
        return newHead;
    }
  
    Node* findMid(Node* head){
        Node* fast = head->next, *slow = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
  
    Node* mergeSort(Node* head) {
        if(!head || !head->next)
            return head;
            
        Node* mid = findMid(head);
        Node* right = mid->next;
        mid->next->prev = NULL;
        mid->next = NULL;
        
        head = mergeSort(head);
        right = mergeSort(right);
        
        head = merge(head, right);
        
        return head;
    }
};