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
class Solution {
public:
    bool solve(TreeNode* root, TreeNode* mn, TreeNode* mx){
        if(root==NULL)
            return 1;
        if((mx==NULL || mx->val> root->val) && (mn==NULL || mn->val<root->val))
            return solve(root->left, mn, root) && solve(root->right, root, mx);
        return false;
    }
    bool isValidBST(TreeNode* root) {
        
        return solve(root, NULL, NULL);
        
    }
};