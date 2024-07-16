
class Solution {
public:

  int maxProfit(vector<int>& arr) {
        int mini=arr[0];
        int profit=0;
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>mini){
               profit+=arr[i]-mini;
            }
            mini=arr[i];
        }

        return profit;
    }
};
