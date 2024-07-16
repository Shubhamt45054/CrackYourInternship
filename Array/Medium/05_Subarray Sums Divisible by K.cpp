class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        map<int,int> mp;
        mp[0]=1;
        int sum=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            int r=sum%k;
            // important point to add k,
            if(r<0) r+=k;
            cnt+=mp[r];
            // cout<<r<<endl;
            mp[r]++;
        }
        return cnt;
    }
};
