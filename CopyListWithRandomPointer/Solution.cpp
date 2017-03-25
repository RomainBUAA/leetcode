ass Solution
{
    public:
        RandomListNode *copyRandomList(RandomListNode * head)
        {
            if (!head )
                return head;
            RandomListNode * new_head = new RandomListNode(head -> label);
            RandomListNode * _new_head = new_head;
            RandomListNode * pre_new_head = new_head;
            std::unordered_map<RandomListNode *,  RandomListNode * > old_list_record;
            RandomListNode * _head = head;
            RandomListNode * pre_head = head;
            while(_head)
            {

                cout<<"head_value"<<_head->label<<endl;

                old_list_record[_head] = _head -> next;
                pre_head = _head;
                _head = _head -> next;
                pre_head -> next = _new_head;
                if(_head)
                    cout<<"_head" << _head -> label <<endl;
                _new_head -> random = pre_head;
                pre_new_head = _new_head;
                if (_head)
                    _new_head = new RandomListNode(_head -> label);
                else
                { _new_head = NULL;}
                pre_new_head -> next = _new_head;

            }

            _head = head;
            _new_head = new_head;
            while(_new_head)
            {
                if(_new_head -> random -> random)
                    _new_head -> random = _new_head -> random -> random -> next;
                else
                    _new_head -> random = NULL;
                _new_head = _new_head -> next;

            }
            while(_head)
            {

                _head -> next = old_list_record[_head];
                cout<<"ok"<<endl;
                _head = _head -> next;

            }

            return new_head;



        }
};
