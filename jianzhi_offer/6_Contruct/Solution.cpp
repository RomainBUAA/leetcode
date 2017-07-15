#include "../common.h"
#include <iostream>
#include <exception>
#include <stdexcept>
#include <cstdio>
using namespace std;
class Solution

{
    public:
        BinaryTreeNode * Contruct(int * pre_order, int * in_order, int length)
        {
            if(pre_order == 0 || in_order == 0 || length <= 0)
                return 0;
            construct_tree(pre_order, pre_order+length-1, in_order, in_order+length-1);
        }
        BinaryTreeNode * construct_tree(int * pre_order_head, int * pre_order_tail, int * in_order_head, int * in_order_tail)
        {

            int *head = pre_order_head;
            int head_index_of_in_order = 0;
            while(in_order_head+head_index_of_in_order!=in_order_tail)
            {
                if(*(in_order_head+head_index_of_in_order)== *head)
                {
                    break;
                }
                head_index_of_in_order++;
            }
            if(*(in_order_head+head_index_of_in_order)!= *head)
            {
                throw std::exception("Invalid input.");
                return 0;
            }
            BinaryTreeNode * head_node = new BinaryTreeNode();
            head_node -> value = *head;
            head_node ->m_pleft = Contruct(pre_order_head+1, in_order_head, head_index_of_in_order) ;
            head_node ->m_pright = Contruct(pre_order_head+head_index_of_in_order+1, in_order_head+head_index_of_in_order+1, in_order_tail-in_order_head-head_index_of_in_order);


        }


};
