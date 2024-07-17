class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        map<int,int> mp;
        int ans=0;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};
