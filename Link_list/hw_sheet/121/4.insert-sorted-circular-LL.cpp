// Insert in Sorted Circular Linked List
// https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1

// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        
        if(!head) 
            return NULL;
            
        if(data<head->data){
            Node* last = head;
            
            while(last->next != head)
                last = last->next;
            
            Node* newNode = new Node(data);
            last->next = newNode;
            newNode->next = head;
            head = newNode;
            return head;
        }
        
        Node* curr = head;
        
        while(curr->next != head){
            if(curr->next->data > data){
                Node* newNode = new Node(data);
                newNode->next = curr->next;
                curr->next = newNode;
                return head;
            }else{
                curr = curr->next;
            }
        }
        
        Node* newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
        
    
        return head;
    }
};