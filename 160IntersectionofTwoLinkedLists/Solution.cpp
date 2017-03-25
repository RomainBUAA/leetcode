class Solution
{
    public:
        ListNode * getIntersectionNode(ListNode * headA, ListNode * headB)
        {
            ListNode * cur_node_long = headA;
            ListNode * cur_node_short = headB;
            ListNode * intsec_head = nullptr;
            int len_a = 0;
            int len_b = 0;
            while(cur_node_long)
            {
                len_a ++ ;
                cur_node_long = cur_node_long -> next;
            }
            while(cur_node_short)
            {
                len_b++;
                cur_node_short = cur_node_short -> next;
            }
            int diff = len_a - len_b;
            cur_node_long = (diff>0 || diff==0)?headA:headB;
            cur_node_short = (diff<0)?headA:headB;
            diff = diff>0?diff:-diff;
            while(cur_node_long)
            {
                if(diff)
                {
                    cur_node_long = cur_node_long -> next;
                    diff -- ;
                    continue;

                }
                else
                {
                    if(cur_node_long == cur_node_short)
                    {
                        return intsec_head = cur_node_long;
                    }
                    cur_node_long = cur_node_long -> next;
                    cur_node_short = cur_node_short -> next;
                }


            }
            return intsec_head;


        }
};
