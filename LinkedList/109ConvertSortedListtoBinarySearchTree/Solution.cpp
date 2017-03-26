class Solution
{
    public:
        TreeNode * sortedListToBST(ListNode * head)
        {
            if (head == nullptr)
                return nullptr;
            else if(head -> next ==nullptr )
                return new TreeNode(head->val);
            ListNode * mid_node = find_mid_node(head);
            TreeNode * root = new TreeNode(mid_node -> val);
            TreeNode * left = sortedListToBST(head);
            TreeNode * right = sortedListToBST(mid_node->next);
            root -> left = left;
            root -> right = right;
            return root;

        }
        ListNode * find_mid_node(ListNode * node)
        {
            ListNode * slow_ptr = node;
            ListNode * fast_ptr = node;
            ListNode * pre_slow_ptr = nullptr;
            while(fast_ptr != nullptr)
            {
                fast_ptr = fast_ptr -> next;
                if(fast_ptr)
                {
                    fast_ptr = fast_ptr -> next;
                    pre_slow_ptr = slow_ptr;
                    slow_ptr = slow_ptr -> next;
                }
            }
            pre_slow_ptr -> next = nullptr;
            return slow_ptr;
        }
};
