class Solution
    {
        public:
        ListNode *detectCycle(ListNode * head)
        {
            if(!head||!head->next)
                return nullptr;
            ListNode * slow  = head, * fast = head;
            bool flag = false;
            while(fast && fast -> next)
            {
                if(!flag)
                {
                    slow = slow -> next;
                    fast = fast -> next -> next;
                }
                else
                {
                    slow = slow -> next;
                    fast = fast -> next;
                }
                if(slow == fast && !flag)
                {
                    flag = true;
                    slow = head;
                    if(slow == fast)
                    {
                        return slow;
                    }
                }
                else if(slow == fast && flag)
                {
                    return slow;
                }
            }
            return nullptr;
        }
    };
