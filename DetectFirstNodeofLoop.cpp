
Node *firstNode(Node *head)
{
	//    Write your code here.
    if(!head)
        return NULL;
    Node *f=head, *s=head;
    while(f && f->next)
    {
    f=f->next->next;
        s=s->next;
        if(f==s)
        {
            while(s!=head)
            {
                s=s->next;
                head=head->next;
            }
            return s;
        }
    }
    return NULL;
}