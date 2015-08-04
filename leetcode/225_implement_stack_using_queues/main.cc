class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        myQueue.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        std::queue<int> temp;
        while(myQueue.size() > 1){
            temp.push( myQueue.front() );
            myQueue.pop();
        }
        myQueue.pop();
        while( !temp.empty() ){
            myQueue.push( temp.front() );
            temp.pop();
        }
    }

    // Get the top element.
    int top() {
        std::queue<int> temp;
        while(myQueue.size() > 1){
            temp.push( myQueue.front() );
            myQueue.pop();
        }
        int res = myQueue.front();
        myQueue.pop();
        temp.push( res );
        while( !temp.empty() ){
            myQueue.push( temp.front() );
            temp.pop();
        }
        return res;
    }

    // Return whether the stack is empty.
    bool empty() {
        return myQueue.empty();
    }
private:
    std::queue<int> myQueue;
};