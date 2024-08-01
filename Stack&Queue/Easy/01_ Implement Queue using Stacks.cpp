class MyQueue {
public:
    // to push
    stack<int> st1;
    // to pop
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int k=st2.top();
        st2.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return k;
    }
    
    int peek() {
           while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int k=st2.top();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return k;
    }
    
    bool empty() {
        return st1.empty();
    }
};
