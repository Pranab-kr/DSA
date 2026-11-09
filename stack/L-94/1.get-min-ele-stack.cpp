// Get Min from Stack
// https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1

// 1.Method 1 (Using two stacks)
// TC -> O(1) , SC -> O(n) for extra min stack

class SpecialStack {
  public:
    stack<int> st1, st2;
    
    SpecialStack() {
    }

    void push(int x) {
       if(st1.empty()){
           st1.push(x);
           st2.push(x);
       }
       else{
           st1.push(x);
           st2.push(min(x,st2.top()));
       }
    }

    void pop() {
       if(st1.empty())
            return;
        else{
            st1.pop();
            st2.pop();
        }
    }

    int peek() {
       if(st1.empty())
            return -1;
        else
            return st1.top();
    }

    bool isEmpty() {
        return st1.empty();
    }

    int getMin() {
       if(st1.empty())
            return -1;
        else
            return st2.top();
    }
};

// 2. Method 2: using mod
// TC -> O(1) , SC -> O(n) 

class SpecialStack {
  public:
    stack<int> st1;
    int con = 101;
    
    SpecialStack() {
    }

    void push(int x) {
        if(st1.empty())
           st1.push(x*con+x);
          else
            st1.push(x*con+(min(st1.top()%con, x)));
    }

    void pop() {
       if(st1.empty())
            return;
        else{
            st1.pop();
        }
    }

    int peek() {
       if(st1.empty())
            return -1;
        else
            return st1.top()/con;
    }

    bool isEmpty() {
        return st1.empty();
    }

    int getMin() {
       if(st1.empty())
            return -1;
        else
            return st1.top()%con;
    }
};