bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head || !head->next)
        return true;
LinkedListNode<int> *f= head, *s= head;
    while(f->next && f->next->next)
    {
        f=f->next->next;
        s=s->next;
    }
    s=s->next;
    if(!s->next)
    {
        if(head->data!=s->data)
            return false;
        return true;
    }
   if(s->next)
   {
       LinkedListNode<int> *prev= NULL, *temp=NULL;
       while(s)
       {
           temp=s->next;
           s->next= prev;
           prev= s;
           s=temp;
       }
       s= prev;
   }
    while(s)
    {
        if(s->data != head->data)
            return false;
        s=s->next;
        head=head->next;
    }
    return true;
}