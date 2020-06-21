#
# @lc app=leetcode.cn id=232 lang=cpp
#
# [232] implement-queue-using-stacks
#
class MyQueue {
public:
    stack<int> s1; //主栈
    stack<int> s2;
    int front;  //队头
    /** Initialize your data structure here. */
    MyQueue() {

    }
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.empty())
            front = x;
        s1.push(x);
    }
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp = front;
        while (s1.top() != front)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        while(!s2.empty())
        {
            push(s2.top());     //用MyQueue中的方法
            s2.pop();
        }
        return temp;
    }
    /** Get the front element. */
    int peek() {
        return front;
    }
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};
# @lc code=end