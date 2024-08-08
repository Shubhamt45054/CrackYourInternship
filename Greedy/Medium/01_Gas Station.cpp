class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans=0;
       int cnt=0;
       int tp=0;
       int td=0;
       int n=gas.size();
       for(int i=0;i<2*n;i++){
           int pp=gas[i%n];
           int dis=cost[i%n];
           tp+=pp;
           td+=dis;
        //   cout<<tp<<" "<<td<<endl;
           while(td>tp && ans<=i){
               tp-=gas[ans%n];
               td-=cost[ans%n];
               ans++;
           }
        //    cout<<ans<<" "<<td<<" "<<tp<<endl;
           if((i-ans+1)==n) return ans;
       }
       
       return -1;
    }
};
