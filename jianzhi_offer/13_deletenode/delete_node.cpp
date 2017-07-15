#include "type.h"
void delete_node(ListNode ** plisthead, ListNode * pto_be_deleted)
{
    if(pto_be_deleted-> next != 0)
    {
        int value = pto_be_deleted -> next ->value;
        ListNode * next = pto_be_deleted -> next;
        pto_be_deleted -> next = next -> next;
        pto_be_deleted -> value = value;
        delete next;
        next = 0;
    }
    else if(pto_be_deleted == *plisthead)
    {
        delete pto_be_deleted;
        pto_be_deleted = 0;
        *plisthead = 0;

    }
    else{
        ListNode * cur_node = *plisthead;
        while(cur_node -> next != pto_be_deleted)
        {
            cur_node = cur_node -> next;
        }
        cur_node -> next = 0;
        delete pto_be_deleted;
        pto_be_deleted = 0;
    }
}
