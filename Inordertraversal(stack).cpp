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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        if(!root)
            return ans;
        TreeNode* curr= root;
        while(curr || !s.empty())
        {
            while(curr)
            {
                s.push(curr);
                curr=curr->left;
            }
        
                ans.push_back(s.top()->val);
                 curr= s.top();
                s.pop();
               
                    curr=curr->right;
                
        }
      return ans;
    }
};