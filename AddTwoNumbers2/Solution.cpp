class Solution{
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack<int> stack_l1;
    stack<int> stack_l2;
    while(l1) {
        stack_l1.push(l1->val);
        l1 = l1->next;
    }
    while(l2) {
        stack_l2.push(l2->val);
        l2 = l2->next;
    }
    ListNode *head = NULL;
    int sum = 0;
    while(!stack_l1.empty() || !stack_l2.empty()) {
        int val_l1 = 0;
        int val_l2 = 0;
        if (!stack_l1.empty()) {

            val_l1 = stack_l1.top();
            stack_l1.pop();
        }
        if (!stack_l2.empty()) {
            val_l2 = stack_l2.top();
            stack_l2.pop();
        }
        sum = val_l1 + val_l2 + sum;
        ListNode *_node = new ListNode(sum%10);
        sum = sum/10;
        _node->next = head;
        head = _node;
    }
    if(sum>0)
    {
    ListNode * _node = new ListNode(sum);
    _node -> next = head;
    head = _node;
    }

    return head;
}
};
