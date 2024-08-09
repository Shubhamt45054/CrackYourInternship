class Solution {
public:
    int minDeletions(string s) {
        map<int,int> mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]-'a']++;
        }
        priority_queue<int> pq;
        int ans=0;
        for(auto it:mp) pq.push(it.second);
        int threshold=pq.top();
        //  cout<<threshold<<endl;
        while(!pq.empty()){
            
            if(pq.top()>threshold){
              ans+=(pq.top()-threshold);
              threshold=max(0,threshold-1);
            }
            else threshold=pq.top()-1;
            pq.pop();
        }

        return ans;
    }
};
