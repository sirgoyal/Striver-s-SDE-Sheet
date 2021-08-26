Node* merge(Node* A, Node *B){
    Node* dum= new Node(0);
    Node *curr= dum;
    while(A && B)
    {
        if(A->data<B->data)
        {
            curr->child=A;
            curr=curr->child;
            A=A->child;
        }
        else{
            curr->child=B;
            curr=curr->child;
            B=B->child;
        }
      
    }
      if(A)
        {
            curr->child=A;
        }
        else curr->child=B;
        return dum->child;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(!head || !head->next)
    return head;
    head->next= flattenLinkedList(head->next);
        head= merge(head, head->next);
    return head;
}
