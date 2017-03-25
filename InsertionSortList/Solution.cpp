class Solution
{
    public:
        ListNode * insertionSortList(ListNode * head)
        {
            while(!head || !head -> next)
                return head;
            ListNode * _head = head;
            ListNode * cur = head;
            while (cur)
            {
                if (cur -> val < _head -> val)
                {
                    int temp = cur -> val;
                    ListNode * temp_node = _head;
                    int temp_inner = _head -> val;
                    int temp_inner_sec = head -> next -> val;
                    while( _head != cur)
                    {
                        temp_inner_sec = _head ->next -> val;
                       _head -> next -> val = temp_inner;

                       temp_inner = temp_inner_sec;
                       _head = _head -> next;
                    }
                    temp_node -> val = temp;

                _head = head;
                cur = cur -> next;
                }
            else{
                if (_head != cur)
                {
                    _head = _head ->next;
                }
                else{
                    cur = cur ->next;
                    _head = head;
                }
            }
        }
            return head;

        }
};
