class Solution
{
    public:
        void remove_node(ListNode ** p_head, int value)
        {
            if(p_head == 0 || * p_head==0)
                return;
            ListNode * temp_node;
            temp_node -> m_pnext = 0;
            temp_node -> value = value;
            if(*p_head -> value == value)
            {
                *p_head = *p_head -> m_pnext;
            }
            else
            {
                ListNode * cur_node = *p_head;
                while(cur_node->m_pnext != 0 && cur_node ->m_pnext-> value != value)
                {
                    cur_node = cur_node -> m_pnext;
                }
                if(cur_node ->m_pnext != 0 && cur_node->m_pnext -> value == value)
                {
                    temp_node = cur_node -> m_pnext;
                    cur_node -> m_pnext = cur_node -> m_pnext -> m_pnext;
                }
                if(temp_node != 0)
                {
                    delete temp_node;
                    temp_node = 0;
                }

            }
            return ;

        }
};
