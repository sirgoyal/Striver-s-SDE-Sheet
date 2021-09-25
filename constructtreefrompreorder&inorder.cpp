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
    TreeNode* solve(int st, int end, int &pre, vector<int>& preorder, vector<int>& inorder,  unordered_map<int, int> &mp){
        if(st>end)
            return NULL;
        TreeNode* root= new TreeNode(preorder[pre++]);
        if(st==end)
            return root;
        root->left= solve(st, mp[root->val]-1, pre, preorder, inorder, mp);
        root->right= solve(mp[root->val]+1,end, pre, preorder, inorder, mp);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        for(int i=0; i<preorder.size(); i++)
            mp[inorder[i]]=i;
        int pre=0;
        return solve(0, inorder.size()-1, pre, preorder, inorder, mp);
    }
};