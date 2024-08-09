class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end());
        int last=INT_MIN;
        int ans=0;
        int n=inter.size();
        for(int i=0;i<n;i++){
            int ss=inter[i][0];
            int ee=inter[i][1];
            if(last<=ss) last=ee;
            else{
                last=min(ee,last);
                ans++;
            }
        }
        return ans;
    }
};
