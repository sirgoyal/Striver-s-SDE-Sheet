Node<int>* reverse(Node<int>* head, int &len)
{
    Node<int> *prev= NULL, *temp=NULL;
    while(head)
    {
        temp=head->next;
        head->next= prev;
        prev=head;
        head=temp;
        len++;
    }
    return prev;
}
Node<int>* add(Node<int>* first, Node<int>* second)
{
    Node<int> *head1=first, *head2=second, *prev;
    int carry=0;
    while(head1 || head2)
    {
            head1->data+=((head2)?head2->data:0)+carry;
           carry= (head1->data)/10;
            (head1->data)%=10;
        if(!head1->next)
          prev= head1;
               head1= head1->next;
        if(head2)
            head2=head2->next;
    }
    if(carry)
        prev->next= new Node<int>(carry);
    return first;
        
}
Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    int len1=0, len2=0;
    first= reverse(first, len1);
    second= reverse(second, len2);
    Node<int>* head;
    if(len1>len2)
        head= add(first, second);
    else head= add(second, first); 
head= reverse(head, len1);
    return head;
}