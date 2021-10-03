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
    /* TC: O(N^2)
    TreeNode* solve(int s, int e, vector<int> &A)
    {
        if(s>e)
            return NULL;
        TreeNode* curr= new TreeNode(A[s]);
        if(s==e)
            return curr;
        int i= s+1;
        while(i<A.size() && A[i]<A[s])
            i++;
        curr->left= solve(s+1, i-1, A);
        curr->right= solve(i, e, A);
        return curr;
            
    }
    TreeNode* bstFromPreorder(vector<int>& A) {
        return solve(0, A.size()-1, A); 
    }*/

// TC: O(N)
TreeNode* solve(int &i, int p, vector<int> &A){
    if(i==A.size() || A[i]>p)
        return NULL;
    TreeNode* curr= new TreeNode(A[i++]);
    curr->left= solve(i, A[i-1], A);
    curr->right= solve(i, p, A);
    return curr;
}
TreeNode* bstFromPreorder(vector<int>& A) {
    int i=0;
    int p= INT_MAX;
        return solve(i, p, A); 
    }


};