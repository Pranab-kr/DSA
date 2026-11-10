//  N Stacks In An Array
//  https://www.naukri.com/code360/problems/n-stacks-in-an-array_1164271?leftPanelTabValue=SUBMISSION

// TC: O(1) , axuiliary space: O(N+S) where N is number of stacks and S is size of array

#include <bits/stdc++.h>

class Node{
    public:
    int idx;
    Node* next;

    Node(int x){
        idx = x;
        next = NULL;
    }
};

class NStack
{
public:
   int *arr;
   Node **Top;
   stack<int> st; // stack to store free/empty spaces idx in array

    NStack(int N, int S)
    {
        arr = new int[S]; // array of size S to store actual content to be stored in stacks
        Top = new Node*[N]; // array of pointers to top of each stack , store the index of top element and next ptr

        for(int i = 0 ;i < N; i++)
            Top[i] = NULL;

        for(int i = 0; i< S; i++)
            st.push(i);     
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(st.empty()) // if no empty space is available in array to push new element
            return false;
        
        arr[st.top()] = x;

        Node *temp = new Node(st.top()); // create a new node with index of newly pushed element in array
        
        temp->next = Top[m-1];
        Top[m-1] = temp;
        st.pop();

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(Top[m-1] == NULL) //if the given stack is empty
            return -1;
        
        int ele = arr[Top[m-1]->idx]; // popped ele
        st.push(Top[m-1]->idx); // push the idx of popped element to stack of empty spaces

        Node *temp = Top[m-1];
        Top[m-1] = Top[m-1]->next; // update the top of stack to next element
        delete temp;

        return ele;
        
    }
};