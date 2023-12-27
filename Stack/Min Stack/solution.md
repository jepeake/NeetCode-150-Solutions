***Min Stack***

- - - 

*Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.*

*Implement the `MinStack` class:*

- *`MinStack()` initializes the stack object.*
- *`void push(int val)` pushes the element `val` onto the stack.*
- *`void pop()` removes the element on the top of the stack.*
- *`int top()` gets the top element of the stack.*
- *`int getMin()` retrieves the minimum element in the stack.*

*You must implement a solution with `O(1)` time complexity for each function.*

- - - 

***Solution***


```c++
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
```

- *Create two stacks - one for the minStack - and one to hold the minimum value in the minStack (minVal) - at the point of each node*
- *When pushing to the minStack - if it is the first element going onto the minStack - add this also to the minVal stack (as 1 value - will be the minimum value of minStack)*
- *Whenever you push after this to minStack and the size is > 1 - if the value is a new minimum value - push this also to the minVal stack - otherwise - copy the value at the top of the minVal stack again to the top of the minStack - so that the minVal can be tracked for each node of minStack*
- *When popping - pop the value off minStack - and the minimum value for that node off the minVal stack*
- *To return the minimum value - just return the top of the minVal stack which is tracking the minimum value at that point in the minStack array*