#include "stack_with_min.h"


template < typename T>
void stack_with_min<T>::push(const & T)
{
    m_data.push(T);
    if(m_min.size() == 0|| m_min.top()>=value)
        m_min.push(value):
    else
    {
        m_min.push(m_min.top());
    }
}

template<typename T>
void stack_with_min<T>::pop()
{
    assert(m_data.size()>0 && m_min.size()>0);
    m_data.pop();
    m_min.pop();
}
const void stack_with_min<T>::min() const
{
    assert(m_data.size()>0&&m_min.size()>0);
    return m_min.top();
}
