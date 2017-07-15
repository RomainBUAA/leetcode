#include "../common.h"
#include <queue>
#include <iostream>
void PrintFromTopToBotton(BinaryTreeNode* pTreeNode)
{
    if(!pTreeNode)
    {
        return ;
    }
    std::queue<BinaryTreeNode * > queueTreeNode;
    queueTreeNode.push(pTreeNode);
    while(queueTreeNode.size())
    {
        BinaryTreeNode * curNode = queueTreeNode.front();
        std::cout << curNode -> value << std::endl;
        queueTreeNode.pop();
        if (curNode -> m_pleft)
            queueTreeNode.push(curNode -> m_pleft);
        if (curNode -> m_pright)
            queueTreeNode.push(curNode -> m_pright);

    }


}

