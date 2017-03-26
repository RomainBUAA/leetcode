class Solution
{
    public:
        ListNode * deleteDuplicates(ListNode * head)
        {
            ListNode * cur_node = head;
            ListNode * pre_node = head;
            while(cur_node)
            {
                pre_node = cur_node;
                cur_node = cur_node -> next;
                if(cur_node)
                {
                    if(cur_node -> val == pre_node -> val)
                    {
                        pre_node -> next = cur_node -> next;
                        cur_node = pre_node;
                    }
                }
            }
            return head;
        }
};
