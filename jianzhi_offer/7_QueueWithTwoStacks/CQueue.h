
#ifndef CQUEUE
#define CQUEUE
#include <stack>
using namespace std;
template <typename T>
class CQueue
{
    public:
        CQueue(void);
        ~CQueue(void);
        void append_tail(const T & node);
        T delete_head();
    private:
        stack<T> stack1;
        stack<T> stack2;

};
#endif
