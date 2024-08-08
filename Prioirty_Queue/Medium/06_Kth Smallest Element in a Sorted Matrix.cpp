class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]-'a']++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans="";
        while(pq.size()>1){
            auto a=pq.top();
            pq.pop();
            auto b=pq.top();
            pq.pop();
            ans+=('a'+a.second);
            ans+=('a'+b.second);
            if(a.first-1!=0){
                pq.push({a.first-1,a.second});
            }
             if(b.first-1!=0){
                pq.push({b.first-1,b.second});
            }
        }

        if(pq.size()==1){
            auto it=pq.top();
            if(it.first==1){
                ans+=('a'+it.second);
            }
            else ans="";
        }

        return ans;
    }
};
