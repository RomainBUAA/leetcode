class Solution
{
    public:
        RandomListNode *copyRandomList(RandomListNode *head)
        {
            if(!head)
                return head;
            RandomListNode * pre_node = head;
            RandomListNode * cur_node = head;
            RandomListNode * new_head;
            RandomListNode * pre_new_node = new_head;
            RandomListNode * cur_new_node = new_head;
            while(cur_node)
            {
                pre_node = cur_node;
                cur_node = cur_node -> next;
                cur_new_node = new RandomListNode(pre_node -> label);
                pre_node -> next = cur_new_node;
                cur_new_node -> next = cur_node;
            }
            cur_node = head;
            new_head = head -> next;
            cur_new_node = new_head;
            while(cur_node)
            {
                pre_node = cur_node;
                if(pre_node -> random)
                cur_new_node -> random = pre_node -> random -> next;
                else
                    cur_new_node -> random = NULL;
                cur_node = cur_new_node -> next;
                if(cur_node)
                    cur_new_node = cur_node -> next;
            }
            cur_node = head;
            new_head = head -> next;
            cur_new_node = new_head;
            while(cur_node)
            {
                pre_node = cur_node;
                cur_node = cur_new_node -> next;
                pre_node -> next = cur_node;
                if (cur_node)
                {
                cur_new_node -> next = cur_node -> next;
                cur_new_node = cur_new_node -> next;
                }
                else
                {
                cur_new_node -> next = NULL;
                pre_node -> next = NULL;
                }
            }
            return new_head;
        }
};
