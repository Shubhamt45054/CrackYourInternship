class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long,vector<long long>,greater<>> pq;
        pq.push(1);
        map<long long,int> vis;
        n--;
        while(n){
            long long t=pq.top();
            pq.pop();
              n--;
            
            // cout<<t<<endl;
            if(t*2<1e10 && vis[t*2]==0){
            pq.push((t*2));
            vis[t*2]=1;
            }

            if(t*3<1e10 && vis[t*3]==0){
            pq.push((t*3));
            vis[t*3]=1;
            }

            if(t*5<1e10 && vis[t*5]==0){
            pq.push((t*5));
            vis[t*5]=1;
            }
        }
        // cout<<pq.top();
        return pq.top();
    }
};
