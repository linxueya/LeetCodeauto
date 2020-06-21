#
# @lc app=leetcode.cn id=155 lang=cpp
#
# [155] min-stack
#
class MinStack {
public:

    int* base;
    int* top1;
    int stackSize = 600;
    int addSize = 600;
    /** initialize your data structure here. */
    MinStack() {
        this->base = new int[stackSize];//malloc(stackSize*sizeof(int));
        this->top1 = this->base;
    }

    void push(int x) {
        if ((this->top1 - this->base) == stackSize)
        {
            this->base = new int [stackSize+ addSize]; //(int*)realloc(this->base,(stackSize+ addSize)*sizeof(int));
            this->top1 = this->base + stackSize;
            stackSize = stackSize + addSize;
        }
        *(this->top1) = x;
        this->top1++;
    }

    void pop() {
        if (this->top1 != this->base)
            this->top1--;
    }

    int top() {
        if (this->top1 != this->base) {
            int e = *(--this->top1);
            this->top1++;
            return e;
        }
        else
            return NULL;
        
    }

    int getMin() {
        int num, min = 0;
        vector<int> v;
        while (this->top1 != this->base) {
            v.push_back( *(--this->top1));
        }
        if (v.size() == 0)
            return NULL;
        else
            min = v[0];
        
        for (int i = 1; i <= v.size() ; i++)
        {
            num = v[v.size() - i];
            this->push(num);
            if (num < min)
                min = num;
        }
        return min;
    }
};
# @lc code=end