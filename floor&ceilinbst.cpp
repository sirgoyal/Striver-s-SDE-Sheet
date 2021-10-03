/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int> * root, int X, TreeNode<int>* &f, TreeNode<int>* &c){
    
    while(root){
    if(root->val==X)
    {
        f=root;
        c=root;
        return;
    }
    if(root->val<X)
    {
        f= root;
        root= root->right;
    }
        else {
         c=root;
            root= root->left;
        }
        }
    return;
}