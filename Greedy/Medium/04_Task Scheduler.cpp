class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        for(char task : tasks){
            freq[task - 'A']++;
        }
        priority_queue<int> pq;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                pq.push(freq[i]);
            }
        }

        int ans=0;
        while(pq.size()>n){
            int k=n+1;
             ans+=k;
            vector<int> arr;
            while(k--){
                int t=pq.top();
                pq.pop();
                t--;
                if(t!=0){
                    arr.push_back(t);
                }
            }
            for(auto it:arr){
                // cout<<it<<endl;
                pq.push(it);
            }
        }
        int k=pq.top()-1;
        ans+=(k)*(n+1);
        while(!pq.empty()){
            if(pq.top()>k) ans++;
            pq.pop();
        }
        return ans;
    }
};
