class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mini=arr[0];
        int profit=0;
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]<mini){
                mini=min(arr[i],mini);
            }
            profit=max(arr[i]-mini,profit);
        }

        return profit;
    }
};
