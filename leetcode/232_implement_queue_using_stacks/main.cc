class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        _stack.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        std::stack<int> temp;
        while(!_stack.empty()){
            temp.push(_stack.top());
            _stack.pop();
        }
        temp.pop();
        while(!temp.empty()){
            _stack.push(temp.top());
            temp.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        std::stack<int> temp;
        while(!_stack.empty()){
            temp.push(_stack.top());
            _stack.pop();
        }
        int res = temp.top();
        while(!temp.empty()){
            _stack.push(temp.top());
            temp.pop();
        }
        return res;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return _stack.empty();
    }
private:
    std::stack<int> _stack;
};