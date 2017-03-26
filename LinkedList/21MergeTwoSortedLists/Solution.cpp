class Solution
{
    public:
        ListNode * mergeTwoLists(ListNode * l1, ListNode * l2)
        {
            ListNode * new_head = new ListNode(0);
            ListNode * cur_node_l1 = l1;
            ListNode * cur_node_l2 = l2;
            ListNode * pre_node = new_head;
            ListNode * cur_node = nullptr;
            while(cur_node_l1 != nullptr || cur_node_l2 != nullptr)
            {
                if(cur_node_l1 == nullptr)
                {

                    cur_node = cur_node_l2;
                    cur_node_l2 = cur_node_l2 -> next;
                }
                else if(cur_node_l2 == nullptr)
                {
                    cur_node = cur_node_l1;
                    cur_node_l1 = cur_node_l1 -> next;
                }
                else{
                    if(cur_node_l1 -> val < cur_node_l2 -> val)
                    {
                        cur_node = cur_node_l1;
                        cur_node_l1 = cur_node_l1 -> next;
                    }
                    else{
                        cur_node = cur_node_l2;
                        cur_node_l2 = cur_node_l2 -> next;
                    }
                }
                pre_node -> next = cur_node;
                pre_node = pre_node -> next;



            }
            return new_head -> next;
        }
};
