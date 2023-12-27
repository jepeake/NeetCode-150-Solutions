class MinStack {
public:
    MinStack() {
        minStack = {};
    }
    void push(int val) {
        minStack.push(val);
        if(minStack.size() == 1){
            minVal.push(val);
        }
        else if(minStack.top() < minVal.top()){
            minVal.push(val);
        }
        else{
            minVal.push(minVal.top());
        }
    }
    void pop() {
        minStack.pop();
        minVal.pop();
    }
    int top() {
        return minStack.top();
    }
    int getMin() {
        return minVal.top();
    }
private:
    stack<int> minStack;
    stack<int>minVal;
};