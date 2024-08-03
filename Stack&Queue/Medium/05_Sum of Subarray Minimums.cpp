class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            long long mini=arr[i];
            long long left=1;
            for(int j=i-1;j>=0;j--){
                if(mini<arr[j]) left++;
                else break;
            }
            long long right=1;
            for(int j=i+1;j<n;j++){
                if(mini<=arr[j]) right++;
                else break;
            }
            long long mul=(right)*(left);
            ans=(ans+(mul*mini)%mod)%mod;
            // cout<<ans<<" "<<mul<<endl;
        }
        return ans;
    }
};
