
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(!head || !head->next)
        return head;
    LinkedListNode<int> *prev= NULL, *curr=head, *temp=curr->next;
    while(curr)
    {
        curr->next=prev;
        prev=curr;
        curr=temp;
        if(temp)
        temp=temp->next;
    }
    return prev;
}