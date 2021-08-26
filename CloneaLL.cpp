class Solution {
public:
    Node* copyRandomList(Node* head) {
     
        Node *curr= head, *temp=head;
        while(curr)
        {
            temp=curr->next;
            curr->next= new Node(curr->val);
            curr->next->next= temp;
            curr=temp;
        }
        curr=head;
        while(curr)
        {
            if(curr->random)
            curr->next->random = curr->random->next;
        curr=curr->next->next;
        }
        Node* dum= new Node(0);
        Node* itr=dum;
        curr=head;
        temp=head;
        while(curr)
        {
            temp=curr->next->next;
            itr->next=curr->next;
            itr=itr->next;
            curr->next=temp;
            curr=temp;
        }
        
        return dum->next;
    }
};