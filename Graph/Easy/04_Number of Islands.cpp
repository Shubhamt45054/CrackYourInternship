class Solution {
public:
    void solve(vector<vector<char>>& grid,vector<vector<int>>& vis,int i,int j){    int row=grid.size();
     int col=grid[0].size();
     if(grid[i][j]==0) return ;

     int xx[4]={0,0,1,-1};
     int yy[4]={1,-1,0,0};
     for(int k=0;k<4;k++){
        int x=i+xx[k];
        int y=j+yy[k];
        if(x>=0 && x<row && y>=0 && y<col && grid[x][y]=='1' && vis[x][y]==0){
            vis[x][y]=1;
            solve(grid,vis,x,y);
        }
     }

        
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>> vis(row,vector<int>(col,0));
        int cnt=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(vis[i][j]==1 || grid[i][j]=='0'){
                    vis[i][j]=1;
                    continue;
                }
                cnt++;
                solve(grid,vis,i,j);

            }
        }

        return cnt;
    }
};
