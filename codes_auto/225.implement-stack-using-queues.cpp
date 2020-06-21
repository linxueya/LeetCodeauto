#
# @lc app=leetcode.cn id=225 lang=cpp
#
# [225] implement-stack-using-queues
#
class MyStack {
public:
    deque<int> q1;
    deque<int> q2;
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q1.push_back(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp = q1.back();
        while (q1.front()!=temp) {
            q2.push_back(q1.front());
            q1.pop_front();
        }
        q1.pop_front();
        while (!q2.empty()) {
            q1.push_back(q2.front());
            q2.pop_front();
        }
        return temp;
    }

    /** Get the top element. */
    int top() {
        return q1.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

# @lc code=end