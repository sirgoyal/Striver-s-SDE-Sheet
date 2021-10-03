struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    
    void solve(Node *root, int &K, int &ans){
        if(!root)
        return;
        solve(root->right, K, ans);
        if(K==1)
        {
            ans= root->data;
            K--;
            return;
        }
        K--;
        solve(root->left, K, ans);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int ans= -1;
        solve(root, K, ans);
        return ans;
    }
};