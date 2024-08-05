class Solution {
public:
    set<vector<int>> ans;
    void solve(vector<int>& arr,int idx,vector<int> temp){
        if(idx==arr.size()){
            ans.insert(temp);
            return ;
        }
        solve(arr,idx+1,temp);
        temp.push_back(arr[idx]);
        solve(arr,idx+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        vector<int> temp;
        solve(arr,0,temp);
        vector<vector<int>> sol(ans.begin(),ans.end());
        return sol;
    }
};
