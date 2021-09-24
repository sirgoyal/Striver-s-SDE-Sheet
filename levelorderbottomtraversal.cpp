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
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        int left= 1+ height(root->left);
        int right= 1+height(root->right);
        return max(left, right);
    }
    void solve(TreeNode* root, int h, vector<vector<int>> &ans){
        if(!root)
            return;
        ans[h].push_back(root->val);
        solve(root->left, h-1, ans);
        solve(root->right, h-1, ans);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d= height(root);
        vector<vector<int>> ans(d);
        solve(root, d-1, ans);
        return ans;
    }
};
