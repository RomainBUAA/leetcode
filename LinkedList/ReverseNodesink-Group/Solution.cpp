class Solution
{
    public:
        ListNode * reverseKGroup(ListNode * head, int k)
        {
            if(head == nullptr || head -> next == nullptr)
                return head;
            node = pre_node;
           ListNode * new_head = new ListNode(0);
           new_head -> next = head;
           reverse_node(new_head, head, k);
           return new_head -> next;
        }
        void reverse_node(ListNode * pre, ListNode * & node, int k)
        {
            int len = 0;
            ListNode * _node = node;
            while(_node)
            {
                len++;
                if(len == k)
                    break;
                _node = _node -> next;
            }
            _node = node;
            if (len<k)
                return ;
            ListNode * pre_node = nullptr;
            ListNode * next = node -> next;
            while(len>0)
            {
                len --;
                next = node -> next;
                node -> next = pre_node;
                pre_node = node;
                node = next;

            }

            _node -> next = node;
            pre -> next = pre_node;
            reverse_node(_node, node, k);


        }

};
