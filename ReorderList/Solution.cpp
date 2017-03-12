class Solution { public: void reorderList(ListNode *head)
    {
        if(!head || !head->next)
            return ;
        int mid_len = 0; int len =0 ;
        ListNode * cp_head = head ;
        while (cp_head) {
            len++;
            cp_head = cp_head -> next;
        }
        mid_len = len/2 ;
        ListNode * half_head; cp_head = head; int count = 0;
        while(cp_head)
        {
            count++;
            if(count == mid_len )
            {
                half_head = cp_head->next;
                cp_head -> next = NULL;
                break;
            }
            cp_head = cp_head->next;
        }
        half_head = reverse(half_head);
        cp_head = head;
        while(cp_head ->next )
        {
            ListNode * next_fir = cp_head -> next;
            ListNode * next_sec = half_head -> next;
            cp_head -> next = half_head;
            half_head -> next = next_fir;
            cp_head = next_fir;
            half_head = next_sec;
        }
        cp_head -> next = half_head;
        }
        ListNode * reverse(ListNode * head)
        {
           if (!head)
               return head;
            ListNode * new_head = NULL;
            while(head)
            {
                ListNode * next = head ->next ;
                head -> next = new_head;
                new_head = head;
                head = next;
            }
            return new_head;
        }



};

