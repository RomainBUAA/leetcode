class Solution
{
    public:
        ListNode * _cur_node;
        TreeNode * sortedListToBST(ListNode * head)
        {
            if(head == nullptr)
                return nullptr;
            _cur_node = head;
            int len = 0;
            while(head)
            {
                len++;
                head = head -> next;
            }
            return bulid_bst(0, len-1);

        }
        TreeNode * bulid_bst(int start, int end)
        {
            int mid = start + (end - start)/2;
            if(start > end)
                return NULL;
            TreeNode * left = bulid_bst(start, mid-1);
            TreeNode * root = new TreeNode(_cur_node -> val);
            root -> left = left;

            _cur_node = _cur_node -> next;
            TreeNode * right = bulid_bst(mid+1, end);
            root -> right = right;
            return root;
        }

};

