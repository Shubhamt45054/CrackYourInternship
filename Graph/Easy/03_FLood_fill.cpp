class Solution {
public:
     void dfs(vector<vector<int>>& grid,int row,int col,int newColor,int start){
       grid[row][col]=newColor;
      
          int n=grid.size();
         int m=grid[0].size();

            int updaterow[4]={-1,0,1,0};
            int updatecol[4]={0,1,0,-1};
                for(int i=0;i<=3;i++){
                    int nrow=row+updaterow[i];
                    int ncol=col+updatecol[i];
                    if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==start ){
                        dfs(grid,nrow,ncol,newColor,start);
                    }
                }
 
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         int start=image[sr][sc];
            vector<vector<int>> grid=image;
            if(start==newColor) return grid;
            
           
            dfs(grid,sr,sc,newColor,start);
                    
                return grid;
    }
};
