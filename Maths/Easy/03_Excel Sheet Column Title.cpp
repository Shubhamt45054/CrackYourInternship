class Solution {
public:
    string convertToTitle(int col) {
        map<int,char> mp;
        for(int i=0;i<26;i++){
            char k='A'+i;
            mp[i+1]=(k);
            // cout<<(i+1)<<" "<<mp[(i+1)]<<endl;
        }
        string ans="";
            while(col>26){
                int r=col%26;
                if(r==0){ 
                    r=26;
                    col--;
                }
                // cout<<r<<endl;
                ans+=mp[r];
                col=col/26;
            }
            ans+=mp[col];
            reverse(ans.begin(),ans.end());
            return ans;
    }
};
