
Node *findMiddle(Node *head) {
    // Write your code here
    Node *curr=head;
    if(!head || !head->next)
        return head;
    int len=0;
    while(curr)
    {
        curr=curr->next;
     len++;   
    }
        int i=0;
        while(i<len/2)
        {
            head=head->next;
            i++;
        }
   return head;
}