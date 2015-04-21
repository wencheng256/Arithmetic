/**
*题目：用两个栈实现一个队列，队列的生命如下，请事先它的两个函数 appendTail和deleteHead，请分别在队列尾部插入节点和在队列头部删除节点的功能。
template<typename T> class CQueue
{
public:
    CQueue(void);
    ~Cqueue(void);

    void appendTail(const T& node);
    T deleteHead();
private:
    stack<T> stack1;
    stack<T> stack2;
}
**/

template<typename T> class CQueue
{
public:
    CQueue(void);
    ~Cqueue(void);

    void appendTail(const T& node);
    T deleteHead();
private:
    stack<T> stack1;
    stack<T> stack2;
}


template<typename T>
void CQueue::appendTail(const T& node)
{
    stack1.push(node);
}


template<typename T>
T CQueue::deleteHead()
{
    if(stack2.size()<=0)
    {
        while(stack2.size()>0)
        {
            T &data=stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    if(stack2.size()==0)                            //要判断整栈的size是否为0
    {
        throw new exception("queue is empty");
    }else
    {
        T head=stack.top();
        stack2.pop();
    }
    return head;
}


