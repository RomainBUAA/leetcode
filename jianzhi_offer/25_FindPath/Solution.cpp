#include "../common.h"
#include <vector>
#include <iostream>

void FindPath(BinaryTreeNode* proot, const int expectedSum)
{
    if (proot == 0)
        return ;
    int currentSum = 0;
    std::vector<BinaryTreeNode *> vectorNode;
}

void print_vector(const std::vector<int> & path)
{
    std::vector<int>::const_iterator iter = path.begin();
    for (;iter!=path.end();iter++)
    {
        std::cout << *iter << std::endl;
    }
}
void FindPathRecur(BinaryTreeNode * curNode, std::vector<int> * path, int currentSum, const int & expectedSum)
{
    currentSum += curNode -> value;
    path -> push_back(curNode -> value);
    if (!curNode -> m_pleft && !curNode -> m_pright)
    {
        if (currentSum == expectedSum)
        {
            print_vector(*path);
            path -> pop_back();
            currentSum -= curNode -> value;
        }
        else
        {
            path -> pop_back();
            currentSum -= curNode -> value;
            return;
        }
    }
    if(curNode -> m_pleft)
    {
        FindPathRecur(curNode -> m_pleft, path, currentSum, expectedSum);
    }
    if(curNode -> m_pright)
    {
        FindPathRecur(curNode -> m_pright, path, currentSum, expectedSum);
    }
}
