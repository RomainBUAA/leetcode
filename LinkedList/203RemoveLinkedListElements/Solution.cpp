class Solution
{
    public:
        ListNode * removeElements(ListNode * head, int val)
        {
            if(head == nullptr)
                return head;
            ListNode * cur_node = head ;
            ListNode * new_head = new ListNode(val+1);
            new_head -> next = head;
            ListNode * pre_node = new_head;
            while(cur_node)
            {
                if(cur_node -> val == val)
                {
                    pre_node -> next = cur_node -> next;
                    cur_node = pre_node;
                }
                pre_node = cur_node;
                cur_node = cur_node -> next;

            }
            return new_head -> next;
        }
};
