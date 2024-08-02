int orangesRotting(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       queue< pair<pair<int,int>,int> > q;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==2)
               q.push({{i,j},0});
           }
       }
       int ans=0;
       while(!q.empty()){
           auto it=q.front();
           int x=it.first.first;
           int y=it.first.second;
           int samay=it.second;
           q.pop();
           ans=max(ans,samay);
           int xx[4]={0,0,1,-1};
           int yy[4]={1,-1,0,0};
           for(int i=0;i<4;i++){
               int nx=x+xx[i];
               int ny=y+yy[i];
               if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                   grid[nx][ny]=2;
                   q.push({{nx,ny},samay+1});
               }
           }
           
       }
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==1)
                 return -1;
           }
       }
       
       return ans;
    }
