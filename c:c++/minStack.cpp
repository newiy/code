class MinStack {
public:
    stack<int> elements;
    stack<int> minStack;
    
    void push(int x) {
        elements.push(x);
        if(minStack.empty() || x <= minStack.top())
            minStack.push(x);
    }
    
    void pop() {
        if(elements.empty()) return;
        if(elements.top() == minStack.top())
            minStack.pop();
        elements.pop();
    }
    
    int top() {
        if(elements.empty()) return 0;
        else
            return elements.top();
    }
    
    int getMin() {
        if(minStack.empty()) return 0;
        else
            return minStack.top();
    }
};