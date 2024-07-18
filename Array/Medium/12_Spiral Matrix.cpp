class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int sr=0;
        int er=mat.size()-1;
        int sc=0;
        int ec=mat[0].size()-1;
        vector<int> ans;
        while(sr<=er && sc<=ec){
            
            for(int j=sc;j<=ec;j++){
                ans.push_back(mat[sr][j]);
            }
            sr++;
            for(int i=sr;i<=er;i++){
                ans.push_back(mat[i][ec]);
            }
            ec--;
             if(sr>er || sc>ec) break;
            for(int i=ec;i>=sc;i--){
                ans.push_back(mat[er][i]);
            }
            er--;
            for(int i=er;i>=sr;i--){
                ans.push_back(mat[i][sc]);
            }
            sc++;
        }
        return ans;
    }
};
