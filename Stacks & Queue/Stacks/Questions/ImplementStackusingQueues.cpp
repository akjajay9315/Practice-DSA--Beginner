#include <queue>

class MyStack
{
private:
    std::queue<int> q;

public:
    MyStack() {}

    void push(int x)
    {
        q.push(x);
        for (int i = 0; i < q.size() - 1; ++i)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int val = q.front();
        q.pop();
        return val;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

// second solution------------------ tc -o(n),sc-nearly o(n)

class MyStack
{
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    queue<int> q2;
    MyStack()
    {
    }

    /** Push element x onto stack. */
    void push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        int result = top();
        q1.pop();
        return result;
    }

    /** Get the top element. */
    int top()
    {
        return q1.front();
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        return q1.empty();
    }
};