BinaryTreeNode * GetNext(BinaryTreeNode * head)
{
    BinaryTreeNode * next = nullptr;
    if(head == nullptr)
        return head
    if(head -> right)
    {
        next = head -> right;
        while(next -> left)
        {
            next = next -> left;
        }
    }
    else if(head-> parent)
    {
        BinaryTreeNode  * parent = head -> parent;
        BinaryTreeNode * cur = head;
        while(parent && parent -> right == cur)
        {
            cur = parent;
            parent = parent -> parent;
        }
        next = cur;
    }
    return next;
}
