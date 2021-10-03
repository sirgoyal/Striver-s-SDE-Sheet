struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

struct info{
    int sz, mn, mx;
    bool isBst;
};
class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
  info solve(Node * root, int &ans){
      
      if(!root)
      {
          return {0, INT_MAX, INT_MIN, 1}; 
      }
      
      
      info l= solve(root->left, ans);
      info r= solve(root->right, ans);
      info ret;
      ret.sz= l.sz+r.sz+1;
          ret.mn= min(root->data, min(l.mn, r.mn));
          ret.mx= max(root->data, max(r.mx, l.mx));
          ret.isBst=0;
      if(l.isBst && r.isBst && root->data>l.mx && root->data<r.mn)
      {
          
          ret.isBst=1;
          ans= max(ret.sz, ans);
          
      }
      return ret;
  }
    int largestBst(Node *root)
    {
    	//Your code here
    	if(!root)
    	return 0;
    	int ans= 0;
    	solve(root, ans);
    	return ans;
    }
};
