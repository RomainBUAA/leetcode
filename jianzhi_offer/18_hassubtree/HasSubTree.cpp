#include <type.h>
bool does_tree_have_tree(BinaryTreeNode * proot1, BinaryTreeNode * proot2);
bool has_sub_tree(BinaryTreeNode * proot1, BinaryTreeNode * proot2)
{
    bool result = false;
    if(proot1 != 0 && proot2 != 0)
    {
        if(proot1 -> value == proot2 -> value)
        {
            result = does_tree_have_tree(proot1, proot2);
        }
        if(!result)
        {
            result = has_sub_tree(proot1 -> m_pleft, proot2);
        }
        if(!result)
        {
            result = has_sub_tree(proot2 -> m_pright, proot2);
        }
    }

}
bool does_tree_have_tree(BinaryTreeNode * proot1, BinaryTreeNode * proot2)
{
    if(proot1 == 0)
    {
        return false;
    }
    if(proot2 == 0)
    {
        return true;
    }
    if(proot1 -> value != proot2 -> value)
    {
        return false;
    }
    return does_tree_have_tree(proot1 -> m_pleft, proot2 -> m_pleft) && does_tree_have_tree( proot1 -> m_pright, proot2 -> m_pright);
}
