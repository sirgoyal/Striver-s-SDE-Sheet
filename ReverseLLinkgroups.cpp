Node* reverse(int i, int n, int b[], Node* head, int len)
{
    if(i==n)
        return head;
    if(b[i]==0)
        return reverse(i+1, n, b, head, len);
    int k= min(len, b[i]);
    Node *prev=NULL, *curr=head, *temp=NULL;
    int l= k;
    while(k>0)
    {
        temp=curr->next;
    curr->next = prev;
        prev= curr;
        curr=temp;
        k--;
    }
    if(curr)
    {
        head->next= reverse(i+1,n, b, curr, len-l);
    }
        return prev;
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
int len=0;
    Node* curr= head;
    while(curr)
    {
        curr=curr->next;
        len++;
    }
    return reverse(0, n, b, head, len);
}