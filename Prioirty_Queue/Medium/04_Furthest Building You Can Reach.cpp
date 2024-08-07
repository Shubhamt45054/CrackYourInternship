class Solution {
public:
    int furthestBuilding(vector<int>& arr, int brik, int lad) {
        int ans=0;
        priority_queue<int> pq;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<=arr[i-1]){
                ans=i;
                 continue;
            }

            int diff=arr[i]-arr[i-1];

            if(diff>brik && lad==0) return i-1;
                brik-=diff;
                pq.push(diff);
               
               if(brik<0){
                    brik+=pq.top();
                    pq.pop();
                   lad--;
               }
               ans=i;
        }

        return ans;
    }
};
