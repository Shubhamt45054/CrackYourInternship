class Solution {
public:
    int minCost(string color, vector<int>& time) {
        
        int n=color.length();
        int mini=0,k=0;
        for(int i=1;i<=n;i++){
            
            if(color[k]==color[i]){
                mini=mini+min(time[k],time[i]);
                if(time[k]<=time[i]){
                    k=i;
                }
            }
            else{
                k=i;
            }
        }

    return mini;
    }
};











