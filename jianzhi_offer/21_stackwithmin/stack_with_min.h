#ifndef CLASS_STACH_WITH_MIN
#define CLASS_STACH_WITH_MIN


#include <stack>
using namespace std;
template<typename T>
class StacK_with_min
{
    public:
        void push(const T & value);
        void pop();
        const T & min() const;
    private:
        stack<T> m_data;
        stack<T> m_min;


};
#endif
