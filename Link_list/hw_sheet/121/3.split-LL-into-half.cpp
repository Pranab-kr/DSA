// Split Linked List Into Halves
// https://www.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1

// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
  public:
    vector<Node *> splitList(Node *head) {
        // code here
        
        int count = 0;
        Node* curr = head;
        
        do{
            curr = curr->next;
            count++;
        }while(curr != head);
        
        // if(count %2 == 0){
        //     count /=2;
        //     count--;
        // }else{
        //     count /=2;
        // }  
        
        count = (count - 1) / 2; // short version
        curr = head;
        
        while(count--){
            curr = curr->next;
        }
        
        Node* head2 = curr->next;
        
        curr->next = head;
        
        curr = head2;
        
        while( curr->next != head)
            curr = curr->next;
        
        
        curr->next = head2;
        
        return {head, head2};
    }
};