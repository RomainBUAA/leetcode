#include "CQueue.h"
template <typename T>
CQueue<T>::CQueue(void)
{
}
template <typename T>
CQueue<T>::~CQueue(void)
{
}
template<typename T>
void CQueue<T>::append_tail(const T & element)
{
    stack1.push(element);
}

template<typename T>
T CQueue<T>:;delete_head()
{
    if(stack2.empty())
    {
        while(!stack1.empty())
        {
            T & data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    if(stack2.empty())
    {
        throw std::exception("error");
    }
    T head = stack2.top();
    stack2.pop();
    return head;

}
