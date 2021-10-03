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
    void flatten(TreeNode* root) {
        if(!root)
            return;
        flatten(root->left);
        if(root->left)
        {
            TreeNode* t= root->right;
            root->right= root->left;
            root->left= NULL;
            TreeNode* temp= root->right;
            while(temp->right)
                temp= temp->right;
         temp->right= t;   
        }
         flatten(root->right);   
        
    }
};