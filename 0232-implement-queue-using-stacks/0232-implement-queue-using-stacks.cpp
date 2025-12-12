class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {}

    // Push element x to the back of queue
    void push(int x) {
        // Move all elements from s1 → s2
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push new element into empty s1
        s1.push(x);

        // Move everything back to s1
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Removes the element from the front of queue
    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }

    // Get the front element
    int peek() {
        return s1.top();
    }

    // Returns whether the queue is empty
    bool empty() {
        return s1.empty();
    }
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */