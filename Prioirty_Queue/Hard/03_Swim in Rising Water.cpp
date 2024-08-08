class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>> pq;

        pq.push({grid[0][0],{0,0}});
        vector<vector<int>> vis(n,vector<int>(n,0));
        int ans=0;
        while(!pq.empty()){
            auto it=pq.top();
            int h=it.first;
            int x=it.second.first;
            int y=it.second.second;
            vis[x][y]=1;
            pq.pop();
            ans=max(ans,h);
            if(x==n-1 && y==n-1){
                break;
            }
        int xx[4]={0,0,1,-1};
        int yy[4]={-1,1,0,0};

        for(int k=0;k<4;k++){
            int nx=x+xx[k];
            int ny=y+yy[k];
            if(nx>=0 && nx<n && ny<n && ny>=0 && vis[nx][ny]==0){
                pq.push({grid[nx][ny],{nx,ny}});
            }
        }
        }

        return ans;
        
    }
};
