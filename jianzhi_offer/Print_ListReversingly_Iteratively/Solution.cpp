#include <iostream>
#include <stack>
using namespace std;
struct ListNode
{
    int value;
    ListNode * m_pnext;
};
class Solution
{
    public:
        void print_listreversingly_iteratively(ListNode * phead)
        {
            stack<ListNode *> list_stack;
            ListNode * cur_node = phead;
            if(phead == 0)
                return ;
            while(cur_node)
            {
                list_stack.push(cur_node);
                cur_node = cur_node -> m_pnext;
            }
            while(!list_stack.empty())
            {
                cur_node = list_stack.top();
                cout<<cur_node -> value;
                list_stack.pop();
            }
            return;

        }
        void recursive_method(ListNode * phead)
        {
            if(phead == 0)
                return;
            recursive_method(phead -> m_pnext);
            cout<< phead -> value << endl;
        }
};
