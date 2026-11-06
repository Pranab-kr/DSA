// Merge Sort for Linked List
// https://www.geeksforgeeks.org/problems/sort-a-linked-list/1

// Time Complexity: O(n log n)
// Auxiliary Space: O(n)

// 1. Merge Sort for Linked List using array/vector
class Solution {
  public:
  
  void merge(vector<int> &arr, int st , int mid , int end){
      vector<int> temp;
      int left = st, right = mid+1;
      
      while(left <= mid && right <= end){
          if(arr[left] < arr[right]){
              temp.push_back(arr[left]);
              left++;
          }else{
              temp.push_back(arr[right]);
              right++;
          }
          
      }
      
      while(left <= mid){
          temp.push_back(arr[left]);
          left++;
      }
      
      while(right <= end){
          temp.push_back(arr[right]);
          right++;
      }
      
      left = st;
      int i = 0;
      
      while(left <= end){
          arr[left] = temp[i];
          left++,i++;
      }
      
  }
    
    void mergeSort(vector<int> &arr, int st , int end){
        
        if(st>=end)
            return;
            
        int mid = st+(end-st)/2;
        
        mergeSort(arr, st , mid);
        mergeSort(arr, mid+1 , end);
        
        merge(arr, st, mid ,end);
    }
  
    Node* mergeSort(Node* head) {
        if(!head || !head->next)
            return head;
            
        Node* curr = head;
        vector<int> arr;
        
        while(curr){
            arr.push_back(curr->data);
            curr = curr->next;
        }
        
        mergeSort(arr ,0, arr.size()-1);
        curr = head;
        
        for(int i = 0 ; i<arr.size(); i++){
            curr->data = arr[i];
            curr = curr->next;
        }
        
        return head;
    }
};

// 2. Merge Sort for Linked List without using extra space
class Solution {
  public:
    
    Node* merge(Node* left , Node* right){
        Node* curr1 = left, *curr2 = right;
        Node* newHead = new Node(-1); // dummy Node
        Node* tail = newHead;
        
        while(curr1 && curr2){
            if(curr1->data <= curr2->data){
                tail->next = curr1;
                
                curr1 = curr1->next; // move the curr1 node to next node
            } else{
                tail->next = curr2;
                
                curr2 = curr2->next; // move the curr1 node to next node
            }
            
            tail = tail->next; // Next loop itteration tail assign whatever curr small node selected 
        }
                    
            if(curr1)
                tail->next = curr1;
                
            if(curr2)
                tail->next = curr2;
            
            tail = newHead;
            newHead = newHead->next;
            delete tail;
        
            return newHead;
    }
    
    Node* findMid(Node* head){
        Node* fast = head->next; // st with the 2nd node for fast cause equal dividation of the list
        Node*slow = head;
        
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
        mid->next = NULL;
        
        head = mergeSort(head);
        right = mergeSort(right);
        
        head = merge(head, right);
        
        return head;
    }
};