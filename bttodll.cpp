struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution
{
    public: 
    void solve(Node *root, Node* &head, Node* &prev){
        if(!root)
        return;
        
        solve(root->left, head, prev);
        
        if(!head)
        {
            head=root;
        }
        else {
            root->left= prev;
            prev->right= root;
        }
        prev= root;
        
        solve(root->right, head, prev);
    }
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
        Node *head=NULL, *prev=NULL;
        solve(root, head, prev);
        return head;
    }
};

