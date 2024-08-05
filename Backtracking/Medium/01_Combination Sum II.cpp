class Solution {
public:
    set<vector<int>> aa;
    void solve(vector<int>& arr,int i,int curr, int tar,vector<int> temp){
        if(curr==tar){
            aa.insert(temp);
            return;
        }
        if(curr>tar || i>=arr.size()) return;

      
        temp.push_back(arr[i]);
        solve(arr,i+1,curr+arr[i],tar,temp);
        temp.pop_back();
        while(i+1<arr.size() && arr[i]==arr[i+1]) i++;
         solve(arr,i+1,curr,tar,temp);
        return ;
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int tar) {
        vector<int> temp;
        sort(arr.begin(),arr.end());
        solve(arr,0,0,tar,temp);
        vector<vector<int>> ans(aa.begin(),aa.end());
         return ans;
    }
};
