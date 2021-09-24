class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        int hd=0;
        int mn=0, mx=0;
        unordered_map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            Node* curr= q.front().first;
            hd= q.front().second;
            mp[hd]= curr->data;
            q.pop();
            if(curr->left)
            {
                q.push({curr->left, hd-1});
                mn= min(hd-1, mn);
            }
            if(curr->right)
            {
                q.push({curr->right, hd+1});
                mx= max(hd+1, mx);
            }
        }
        vector<int> ans;
        for(int i=mn; i<=mx; i++)
        ans.push_back(mp[i]);
        return ans;
    }
};
