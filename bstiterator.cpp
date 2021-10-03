/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    TreeNode* curr;
    stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
        curr=root;
        while(curr)
        {
            s.push(curr);
            curr= curr->left;
        }
    }
    
    int next() {
        
        TreeNode* ans= s.top();
        s.pop();
        curr= ans->right;
        while(curr)
        {
            s.push(curr);
            curr=curr->left;
        }
        return ans->val;
    }
    
    bool hasNext() {
        return s.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */