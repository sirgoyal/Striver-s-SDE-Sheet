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
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int &p, int s, int e, unordered_map<int, int>&mp){
        if(s>e)
            return NULL;
        int ind= mp[postorder[p]];
        TreeNode* curr= new TreeNode(postorder[p--]);
        if(s==e)
            return curr;
        curr->right= solve(inorder, postorder, p, ind+1, e, mp);
        curr->left= solve(inorder, postorder, p, s, ind-1, mp);
        return curr;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mp;
        for(int i=0; i<inorder.size(); i++)
            mp[inorder[i]]= i;
        int p=postorder.size()-1;
        return solve(inorder, postorder, p, 0, inorder.size()-1, mp);
    }
};