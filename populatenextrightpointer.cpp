/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* n, *ans= root;
        while(root)
        {
            n= root;
            if(n->right)
            n->left->next= n->right;
            while(n->next){
                if(n->right)
                n->right->next= n->next->left;
                n= n->next;
                if(n->right)
                n->left->next=n->right;
            }
            root=root->left;
            
        }
        return ans;
    }
};