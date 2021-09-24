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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*> s;
    vector<int> ans;
        s.push(root);
            while(s.size()){
                int n= s.size();
                int i=0;
                while(i<n)
                {
                    TreeNode* t= s.front();
                    s.pop();
                    if(i==n-1)
                        ans.push_back(t->val);
                    if(t->left)
                        s.push(t->left);
                    if(t->right)
                        s.push(t->right);
                    i++;
                }
            }
        return ans;
        
    }
};