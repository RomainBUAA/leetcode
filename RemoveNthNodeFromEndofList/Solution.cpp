class Solution
{
    public:
    ListNode * removeNthFromEnd(ListNode * head, int n)
    {
        if(!head || (!head->next && n==1 && n>1 ))
            return NULL;
        ListNode * new_head = new ListNode(0);
        new_head -> next = head;
        ListNode * _head = head, * behind_head = new_head, * pre_head = new_head;

        int count=0;
        while(_head)
        {
            count++;
            if(count > n)
            {
                if( count == n+1)
                behind_head = head;
                pre_head = behind_head;
                behind_head = behind_head -> next;
            }

            _head = _head -> next;

        }
        if(pre_head == new_head)
            return head -> next;
        pre_head -> next = behind_head -> next;
        return head;
    }
};
