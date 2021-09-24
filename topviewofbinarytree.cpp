/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        queue<pair<Node*, int>> q;
        unordered_map<int, int> mp;
        q.push({root, 0});
        int mn=0;
        int mx=0;
        while(q.size())
        {
            Node* curr= q.front().first;
            int hd= q.front().second;
            q.pop();
            if(!mp[hd])
            {
                mp[hd]= curr->data; 
            }
            if(curr->left)
            {
                mn= min(mn, hd-1);
                q.push({curr->left, hd-1});
            }
            if(curr->right)
            {
                mx= max(mx, hd+1);
                q.push({curr->right, hd+1});
            }
        }
        for(int i=mn; i<=mx; i++)
{
    ans.push_back(mp[i]);
}
return ans;
    }

};

