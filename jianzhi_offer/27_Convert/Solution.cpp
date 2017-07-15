#include "../common.h"

void ConvertNode(BinaryTreeNode * pNode, BinaryTreeNode ** lastNode)
{
    if (pNode == 0)
        return;
    if(pNode -> m_pleft != 0)
    {
        ConvertNode(pNode -> m_pleft, lastNode);
    }
    pNode -> m_pleft = *lastNode;
    if (*lastNode != 0)
        (*lastNode) -> m_pright = pNode;
    *lastNode = pNode;
    if(pNode -> m_pright != 0)
    {
        ConvertNode(pNode -> m_pright, lastNode);
    }




}
BinaryTreeNode * Convert(BinaryTreeNode * pRootOfTree)
{
    BinaryTreeNode *lastNode = 0;
    ConvertNode(pRootOfTree, &lastNode);
    BinaryTreeNode * headNode = lastNode;
    while (headNode -> m_pleft !=0 && headNode != 0)
    {
        headNode = headNode -> m_pleft;
    }
    return headNode;

}

