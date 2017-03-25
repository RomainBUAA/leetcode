class Solution
{
    public:
        ListNode * deleteDuplicates(ListNode * head)
        {
            if(head == nullptr || head->next == nullptr)
                return head;
            ListNode * cur_node = head -> next;;
            ListNode * pre_node = head;
            ListNode * pre_2_node = new ListNode(-1);
            pre_2_node -> next = head;
            ListNode * new_head = pre_2_node;
            int flag = 0;
            while(cur_node)
            {
                if(cur_node -> val == pre_node -> val)
                {
                    flag = 1;
                    pre_node -> next = cur_node -> next;
                    cur_node = pre_node;
                }
                else
                {
                    if(flag)
                    {
                        pre_2_node -> next = cur_node;
                    }
                    else
                    {
                        pre_2_node = pre_node;
                    }
                    flag = 0;
                }
                pre_node = cur_node;
                cur_node = cur_node -> next;
            }
            if(flag)
            pre_2_node -> next = cur_node;
            return new_head -> next;


        }
};
