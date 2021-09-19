class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int ones=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                    ones++;
                else if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        int cnt=0;
        int dx[4]= {0, 0, 1, -1};
        int dy[4]= {1, -1, 0, 0};
        int tm=0;
        while(!q.empty())
        {
            int n= q.size();
            while(n--){
            pair<int , int> t= q.front();
            q.pop();
            
            for(int i=0; i<4; i++)
            {
                if(t.first+ dx[i]>=0 && t.first+ dx[i]<grid.size() && t.second+dy[i]>=0 && t.second+dy[i]<grid[0].size() && grid[t.first+ dx[i]][t.second+dy[i]]==1)
                {
                    grid[t.first+ dx[i]][t.second+dy[i]]=2;
                    q.push({t.first+ dx[i], t.second+dy[i]});
                    cnt++;
                }
            }
            }
            if(!q.empty())
            tm++;
        }
        if(cnt==ones)
            return tm;
            else return -1;
    }
};