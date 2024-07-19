class Solution {
public:
    int check(vector<vector<int>>& board,int i,int j){
        int n=board.size();
        int m=board[0].size();
        int xx[3]={-1,0,1};
        int yy[3]={-1,0,1};
        int cnt=0;
        for(int a=0;a<3;a++){
            int nx=i+xx[a];
            if(nx>=n || nx<0) continue;
            for(int b=0;b<3;b++){
                int ny=j+yy[b];
                if(ny>=m || ny<0) continue;

                if(a==1 && b==1) continue;
                    cnt+=(board[nx][ny]%2);
            }
        }
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int life=check(board,i,j);
                if(board[i][j]%2==1){
                    if(life<2 || life>3) board[i][j]=3;
                }
                else{
                    if(life==3) board[i][j]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                board[i][j]=((board[i][j]%3+1)/2);
            }
        }

    }
};
