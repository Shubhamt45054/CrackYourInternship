 int celebrity(vector<vector<int> >& mat) {
        int n=mat.size();
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(i!=j)
                sum+=mat[j][i];
            }
            if(sum==n-1){
                int cnt=0;
                for(int j=0;j<n;j++){
                    if(i!=j && mat[i][j]==1) cnt++;
                }
                if(cnt==0) return i;
            }
        }
        
        return -1;
    }
