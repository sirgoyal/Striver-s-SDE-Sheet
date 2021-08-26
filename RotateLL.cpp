
Node *rotate(Node *head, int k) {
     // Write your code here.
    int len=0;
    if(!head || !head->next)
        return head;
    Node* temp= head;
    while(temp)
    {
        temp=temp->next;
        len++;
    }
    if(k>len)
  k=k%len;
    k= len-k;
    temp=head;
    if(k==0 || k==len)
        return head;
    while(k>1)
    {
        temp=temp->next;
        k--;
    }
    Node* nh= temp->next;
    temp->next=NULL;
    temp= nh;
    while(temp->next)
        temp=temp->next;
    temp->next= head;
    return nh;
   
    
}