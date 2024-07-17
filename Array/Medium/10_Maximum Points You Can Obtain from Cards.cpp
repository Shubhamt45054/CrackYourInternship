class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int sum=0;
        int n=card.size();
        for(int i=0;i<k;i++){
            sum+=card[i];
        }
        int ans=sum;
        int i=n-1;
        int j=k-1;
        while(k--){
            sum-=card[j];
            sum+=card[i];
            j--;
            i--;
            ans=max(ans,sum);
        }
        return ans;
    }
};
