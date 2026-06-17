class MinStack {
private:
    stack<long long> st;
    long long current_min;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        long long val = value;
        
        
        if (st.empty()) {
            st.push(val);
            current_min = val;
        } 
       
        else if (val < current_min) {
            st.push(2 * val - current_min);
            current_min = val; 
        } 
        
        else {
            st.push(val);
        }
    }
    
    void pop() {
        if (st.empty()) return;
        
        long long top_val = st.top();
        st.pop();
        
        
        if (top_val < current_min) {
            
            current_min = 2 * current_min - top_val;
        }
    }
    
    int top() {
        long long top_val = st.top();
        
        
        if (top_val < current_min) {
            return current_min;
        }
        return top_val;
    }
    
    int getMin() {
        return current_min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */