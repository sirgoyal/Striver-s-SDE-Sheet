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
   
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root)
return ans;
        stack<TreeNode*> s;
        TreeNode *curr= root, *temp;
        while(curr || s.size()){
            while(curr)
            {
                s.push(curr);
                curr=curr->left;
            }
            if(s.size())
            {
                if(s.top()->right)
                    curr= s.top()->right;
                else {
                    temp=s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    while(s.size() && s.top()->right==temp)
                    {
                      temp=s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    }
                }
            }
        }
    return ans;
    }
};