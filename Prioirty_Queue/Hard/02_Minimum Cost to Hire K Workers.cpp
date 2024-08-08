class Solution {
public:
    double mincostToHireWorkers(vector<int>& qty, vector<int>& wage, int k) {
        // ḍouble need to get into points
        priority_queue<pair<double,int> , vector< pair<double,int> > , greater<> > pq;
        for(int i=0;i<qty.size();i++){
            // wage per qty , qty 
            pq.push({ (double)wage[i]/qty[i] , qty[i]});
        }
        
        double ans=INT_MAX;
        // total qualtiy 
        double sum=0;
        // wage factor
        double mul=0;
        int n=qty.size();
        priority_queue<double> arr;
        while(k--){
            auto it=pq.top();
            pq.pop();
            mul=max(mul,it.first);
            sum+=it.second;
            arr.push(it.second);
        }
        ans=min(ans,mul*sum);
        while(!pq.empty()){
            // removing big qty from already stored data
            sum-=arr.top();
            arr.pop();
            auto it=pq.top();
            pq.pop();
            mul=max(mul,it.first);
            // adding new qty
            sum+=it.second;
            arr.push(it.second);
            ans=min(ans,mul*sum);
        }

        return ans;
    }
};
