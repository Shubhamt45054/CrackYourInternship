class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int n=s.size();
        int maxcount=0;
        int ans=0;
        int size=0;
        int j=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(size>(maxcount+k)){
                mp[s[j]]--;
                j++;
                size--;
            }
            maxcount=max(maxcount,mp[s[i]]);
            ans=max(ans,maxcount+k);
            size++;
        }
        ans=min(ans,n);
        return ans;
    }
};
