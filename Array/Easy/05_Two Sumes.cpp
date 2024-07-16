class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        map<int,int> mp;
        for(int i=0;i<num.size();i++){
            int k=t-num[i];
            if(mp.find(k)!=mp.end()) return {i,mp[k]};
            mp[num[i]]=i;
        }
        return {};
    }
};
