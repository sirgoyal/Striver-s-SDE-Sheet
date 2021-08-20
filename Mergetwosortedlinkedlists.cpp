void traverse(Node<int>* &first, Node<int>* &prev)
{
      Node<int>* node= new Node<int>(first->data);
        prev->next= node;
        prev= node;
            first=first->next;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* dum = new Node<int>(0);
    Node<int>* prev= dum;
    while(first!=NULL && second!=NULL)
    {
        if(first->data<second->data){
            traverse(first, prev);
          
        }
        else{
              traverse(second, prev);
        }
    }
    while(first!=NULL)
    {
          traverse(first, prev);
    }
    while(second!=NULL)
    {
         traverse(second, prev);
    }
    return dum->next;
}
