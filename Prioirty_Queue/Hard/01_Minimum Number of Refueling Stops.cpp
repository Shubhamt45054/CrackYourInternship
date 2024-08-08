class Solution {
public:
    int minRefuelStops(int tar, int start, vector<vector<int>>& st) {
        priority_queue<int> pq;
        int n=st.size();
        int ans=0;
        int right=0;
        if(start>=tar) return 0;
        for(int i=0;i<n;i++){
            int dis=st[i][0];
            int fl=st[i][1];
            dis-=right;
            start-=dis;
            while(!pq.empty() && start<0){
                start+=pq.top();
                ans++;
                pq.pop();
            }
            if(start<0) return -1;
            pq.push(fl);
            right+=dis;
        }
        right+=start;
        while(!pq.empty() && right<tar){
            right+=pq.top();
            pq.pop();
            ans++;
        }
        if(right<tar) return -1;

        return ans;
    }
};
