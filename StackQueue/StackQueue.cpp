/**
*��Ŀ��������ջʵ��һ�����У����е��������£������������������� appendTail��deleteHead����ֱ��ڶ���β������ڵ���ڶ���ͷ��ɾ���ڵ�Ĺ��ܡ�
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
    if(stack2.size()==0)                            //Ҫ�ж���ջ��size�Ƿ�Ϊ0
    {
        throw new exception("queue is empty");
    }else
    {
        T head=stack.top();
        stack2.pop();
    }
    return head;
}


