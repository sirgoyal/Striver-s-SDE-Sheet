LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
     if (head == NULL || K == 0)
    {
        return head;
    }
    LinkedListNode<int>* dum= new LinkedListNode<int>(0);
    dum->next= head;
    LinkedListNode<int> *f= dum, *s=dum;
    while(K--)
    {
        f=f->next;
    }
    while(f->next!=NULL)
    {
        s=s->next;
        f=f->next;
    }
    s->next= s->next->next;
    return dum->next;
}