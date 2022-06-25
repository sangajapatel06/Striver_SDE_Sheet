class Stack
{
public:
    queue<int> que;
    void push(int x)
    {
        que.push(x);
        for (int i = 0; i < que.size() - 1; ++i)
        {
            que.push(que.front());
            que.pop();
        }
    }

    void pop()
    {
        que.pop();
    }

    int top()
    {
        return que.front();
    }

    bool empty()
    {
        return que.empty();
    }
};