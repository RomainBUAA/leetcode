ass Solution
{
     
        public:
            ListNode *oddEvenList(ListNode *head)
            {
                        if ( !head )
                         {   return head;}
                        ListNode *first = head;
                        ListNode *second = head -> next;
                        ListNode *temp = second;
                        while ( second && second->next)
                        {
                        first -> next = second ->next ;
                        first = first -> next;                                          
                        second -> next = first -> next;
                        second = second-> next;
                        }
                                                                                                                                                                                 first -> next = temp;
                    return head;
                }
};

