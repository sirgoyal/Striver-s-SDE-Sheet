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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        queue<TreeNode*>q;
        int flag=0;
        
        q.push(root);
        while(!q.empty())
        {
            int n= q.size();
            int i=0;
            vector<int> row(n);
            while(i<n)
            {
                TreeNode* curr= q.front();
                q.pop();
                int k= (flag)?n-i-1:i;
                row[k]=curr->val;
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                    
            i++;
            }
            ans.push_back(row);
            flag=!flag;
            
        }
        return ans;
    }
};
