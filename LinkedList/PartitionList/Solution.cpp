class Solution
{
    public:
        ListNode * partition(ListNode * head, int x)
        {
            ListNode * head_l = new ListNode(0);
            ListNode * head_g = new ListNode(0);
            ListNode * _head = head, * _head_l = head_l, * _head_g = head_g;
            while(_head)
            {
                ListNode * next = _head -> next;
                if( _head -> val < x)
                {
                    _head_l -> next = _head;
                    _head_l = _head_l ->next;
                    _head_l -> next = NULL;
                }
                else
                {
                    _head_g -> next = _head;
                    _head_g = _head_g ->next;
                    _head_g -> next = NULL;
                }
                _head = next;
            }
            _head_l -> next = head_g -> next;
            return head_l -> next;
        }

};
