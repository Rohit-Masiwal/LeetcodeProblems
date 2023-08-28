class MyStack {
public:
    deque<int> d;
    MyStack() {
        
    }
    
    void push(int x) {
        d.push_back(x);
    }
    
    int pop() {
        int n=d.back();
        d.pop_back();
        return n;
    }
    
    int top() {
        return d.back();
    }
    
    bool empty() {
        if(!d.empty()) return 0;
        return 1;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */