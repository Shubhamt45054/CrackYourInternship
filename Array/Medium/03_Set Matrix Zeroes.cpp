class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(mat[i][0]==0){
                for(int j=0;j<m;j++){
                    mat[i][j]=0;
                }
            }class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int row=0,col=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    mat[0][j]=0;
                    if(i==0) row=1;
                    if(j==0) col=1;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(mat[i][0]==0){
                for(int j=0;j<m;j++){
                    mat[i][j]=0;
                }
            }
        }
         for(int i=1;i<m;i++){
            if(mat[0][i]==0){
                for(int j=0;j<n;j++){
                    mat[j][i]=0;
                }
            }
        }
       
       if(row==1){
            for(int j=0;j<m;j++){
                    mat[0][j]=0;
                }
       }
       if(col==1){
                for(int j=0;j<n;j++){
                    mat[j][0]=0;
                }
       }
        
    }
};
        }
         for(int i=1;i<m;i++){
            if(mat[0][i]==0){
                for(int j=0;j<n;j++){
                    mat[j][i]=0;
                }
            }
        }
        if(mat[0][0]==0){
            for(int j=0;j<m;j++){
                    mat[0][j]=0;
                }
                for(int j=0;j<n;j++){
                    mat[j][0]=0;
                }
        }
    }
};
