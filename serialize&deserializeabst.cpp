/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    
   void serializehelper(TreeNode* root, string& s){
        if(root==nullptr) return;
        
        s+=to_string(root->val) + ","; // ',' for seperating each value
        serializehelper(root->left, s);
        serializehelper(root->right, s);
    }
    
    string serialize(TreeNode* root) {
        if(root==nullptr) return "";
        
        string s="";
        serializehelper(root, s);
        
        return s;
    }
    // Decodes your encoded data to tree.
    TreeNode* solve(string &data, int &i, int bound){
        if(i==data.size())
            return NULL;
        int a;
       string s;
        int j= i;
            while(data[j]!=',')
            {
                s+=data[j];
                j++;
            }
           a= stoi(s);
            j++;
        
        if(a>bound)
            return NULL;
        TreeNode* curr= new TreeNode(a);
        i=j;
        curr->left= solve(data, i, curr->val);
        curr->right= solve(data, i, bound);
        return curr;
    }
    TreeNode* deserialize(string data) {
        if(!data.size())
            return NULL;
        
        int i=0;
       
       return solve(data, i, INT_MAX);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;