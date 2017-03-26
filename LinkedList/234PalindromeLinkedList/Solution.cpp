class Solution
{
    public:
        bool isPalindrome(ListNode * head)
        {
            if(head == nullptr || head -> next == nullptr)
                return true;
            ListNode * fast_ptr = head;
            ListNode * slow_ptr = head;
            while(fast_ptr)
            {
                fast_ptr = fast_ptr -> next;
                slow_ptr = slow_ptr -> next;
                if(fast_ptr != nullptr)
                {
                    fast_ptr = fast_ptr -> next;
                }
            }
            reverse_list(slow_ptr);
            while(head != nullptr && slow_ptr != nullptr)
            {
                if(head -> val != slow_ptr -> val)
                    return false;
                head = head -> next;
                slow_ptr = slow_ptr ->next;
            }
            return true;


        }
        void reverse_list(ListNode * & node)
        {
            if(node == nullptr || node -> next == nullptr)
                return ;
            ListNode * pre_node = nullptr;
            ListNode * next = node -> next;
            while(node)
            {
                next = node -> next;
                node -> next = pre_node;
                pre_node = node;
                node = next;
            }
            node = pre_node;
            return;
        }
};
