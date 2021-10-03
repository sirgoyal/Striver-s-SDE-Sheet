/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    while(root){
    if(!root)
    return;
    
    if(root->key== key)
    {
        if(root->left)
        {
            pre=root->left;
            while(pre->right)
            {
                pre= pre->right;
            }
            
        }
        
        if(root->right)
        {
            suc= root->right;
            while(suc->left)
            suc= suc->left;
        }
        return;
        
    }
    else if(root->key<key)
    {
        pre= root;
        root= root->right;
    }
    else {
        suc= root;
        root= root->left;
    }
}
// Your code goes here
return;
}